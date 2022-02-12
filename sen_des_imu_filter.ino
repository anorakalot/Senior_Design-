#include <Wire.h>
#include <LSM6.h>

LSM6 imu;

unsigned long curr_time_imu = 0;
unsigned long prev_time_imu = 0;

unsigned long imu_interval =10;

//float angle_time_rate = 0.01;
//
//float gyro_raw_data_z;
//float gyro_angle_z;

int gyro_raw_data_z;
int gyro_angle_z;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("BEGINNING IMU TEST");
  Wire.begin();
  
  while (!imu.init()) {
    Serial.println("IMU INIT FAILED");
    //while (1);
    delay(1000);
  }
  //imu.init();
  imu.enableDefault();
}

void loop() {
//  //int main() {
//  //while (1) {
//  // put your main code here, to run repeatedly:
// imu.read();
// Serial.print("imu.g.z: ");
// Serial.println(int(imu.g.z));
// delay(1000);
//  // Serial.println("APPLEPIE");
//  // delay(1000);
//  //}
//  //}

//TESTING ENCODER PID 
  
  
  curr_time_imu = millis();
if ((curr_time_imu - prev_time_imu) > imu_interval){
 
   imu.read();
  // Serial.print("imu.g.z: ");
  // 
  // Serial.println(imu.g.z);
   
   //getting raw data gyro 
   //and then converting it to angle by taking sum integral * the time rate which is 0.01 s
   //or 10 ms/ 100 hz for the timing 
   gyro_raw_data_z = imu.g.z; 
   
   //gyro_angle_z += (gyro_raw_data_z * angle_time_rate);
   
   //testing int just integral(adding gyro raw data to gyro_angle
   //gyro_angle_z +=(gyro_raw_data_z);
   gyro_angle_z +=((gyro_raw_data_z/100));
   Serial.println(gyro_angle_z);
   
  
  //  accel_raw_data_z = imu.a.z;
  //  //complementary filter to handle drift
   
  //  accel_data = atan2(accel_raw_data_z);
  //  Serial.println(accel_data);
  
  //  angle = 0.98*(gyro_angle_z) + 0.02*(accel_data);
  //  Serial.println(angle);
  //  Serial.println("\n");
   
    prev_time_imu = curr_time_imu;
    //delay(1000); 
  }

}
