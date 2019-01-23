#!/usr/bin/env node
/*
 * CSUN FSAE EV 2018
 * ROS NODE: DATA OUT
 * Topics Subscribed: Filtered Signals
 * Topics Publishing: None
 * Tag: RN2
 * Summary:
 *  This node is meant to take the filtered data from the data aqcuisition pci card and send it
 *  to the server for remote viewing i.e. visualization. Socketio is the main lib used here.
 *  The main function of this node is to subscribe to all data from the daq card and send it
 *  out.
 *
 * Related:
 *   Documentation:
 *     - COMP-490-FSAE/Embedded/JetsonRos.html (draw.io)
*/
// hi test
'use strict';
const rosnodejs = require('rosnodejs');
var io = require('socket.io-client')("https://api.matadormotorsports.racing");
const std_msgs = rosnodejs.require('fsae_electric_vehicle').msg;
function listener() {
  console.log("test");
  rosnodejs.initNode('listener')
    .then((rosNode) => {
      let imu_data = rosNode.subscribe('imu_data', std_msgs.imu_data,
        (data) => { // define callback execution
              //console.log("test");
              let now = new Date();
              //console.log(data.gyro_x);
              //console.log(data.accel_x);
              //console.log(data.compass_x);
              io.emit("gyroscope", {time: now, x: data.gyro_x, y: data.gyro_y, z: data.gyro_z});
              io.emit("accelometer", {time: now, x: data.accel_x, y: data.accel_y, z: data.accel_z});
              io.emit("compass", {time: now, x: data.compass_x, y: data.compass_y, z: data.compass_z});
        }
      );
      let temp_and_pressure = rosNode.subscribe('temp_and_pressure', std_msgs.temp_and_pressure,
        (data) => {
          let now = new Date();
          console.log("temp_and_pressure");
          console.log(data.temp); 
          console.log(data.pressure); 
          io.emit("temperature", {time: now, value: data.temperature});
          io.emit("pressure", {time: now, value: data.pressure});
        }   
          
      )
      
    });
}

if (require.main === module) {
  listener();
}
