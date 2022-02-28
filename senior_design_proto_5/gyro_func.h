//
//
//LSM6 imu;
//
//
//void update_gyro() {
//
//
//  curr_time_imu = millis();
//  if ((curr_time_imu - reset_time_imu ) > reset_imu_interval) {
//    gyro_angle_z = 0;
//    reset_time_imu = curr_time_imu;
//  }
//
//  if ((curr_time_imu - prev_time_imu) > imu_interval) {
//
//    imu.read();
//    gyro_raw_data_z = imu.g.z;
//    gyro_angle_z += ((gyro_raw_data_z / 100));//100 works 
//    Serial.println(gyro_angle_z);
//
//
//
//    prev_time_imu = curr_time_imu;
//  }
//}
//
////gyro_turn_func
//void right_turn_w_gyro() {
//  gyro_angle_z = 0;
////  halt();
////  delay(1000);
//  halt_sec();
//  while (gyro_angle_z > -7860) {//-8000,-7900,7850
//    right_turn();
//    update_gyro();
//  }
////  halt();
////  delay(1000);
//  halt_sec();
//}
//
//
//
//
//void left_turn_w_gyro() {
//  gyro_angle_z = 0;
////  halt();
////  delay(1000);
//  halt_sec();
//  while (gyro_angle_z <7860) { //100 too small,1000,3000,6000,6500,6700,6900,7200(close),7500(30,7800(close),7900,8000(really close),7900(really close)
//    left_turn();        //7900,7800(too little),7850(REALLY Good but I'm gonna try a little more
//    update_gyro();
//  }
////  halt();
////  delay(1000);
//  halt_sec();
//  gyro_angle_z = 0;
//}
