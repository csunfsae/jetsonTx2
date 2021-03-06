#! /usr/bin/env node
'use strict';
const express = require('express')();
const server = require('http').Server(express);
const io = require('socket.io')(server,{
  pingInterval: 1000,
  pingTimeout: 1000
});
const ioClient = require('socket.io-client')("https://api.matadormotorsports.racing");

const rosSubscribe = require('./rosSubscribe');
const rosnodejs = require('rosnodejs');
const std_msgs = rosnodejs.require('fsae_electric_vehicle').msg;

express.get('/', (req, res) => {
  res.send("OK!");
});

class ioMessage {
  constructor(type, json) {
    json.time = new Date();
    this.json = json;
    this.type = type;
    this.emit();
  }
  emit() {
    io.emit(this.type, this.json);
  }
};
function canMessage(action, value=null){
  const pub = rosNode.advertise('can_bus_commands', std_msgs.can_message);
  const msg = new std_msgs.can_message();
  msg.id = '201';
  msg.data = action;
  msg.speed = value;
  pub.publish(msg);
}
function app() {
  rosnodejs.initNode('localServer')
  .then((rosNode) => {
    rosSubscribe(rosNode, std_msgs, ioMessage);
    io.on('connection', function (client) {
      client.on("disconnect", function(){
        canMessage('toggle_analog');
      });
      client.on('can_bus', function (data) {
        canMessage(data.action,data.value); 
      });
    });
    server.listen(3000, () => console.log('Example app listening on port 3000!'));
  });
}
if(require.main === module){
  app();
}
