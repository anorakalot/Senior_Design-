//left
int trig_pin_3 = 11;
int echo_pin_3 = 12;

//middle
int trig_pin_2=9;
int echo_pin_2=10;


//right 
int trig_pin_1 = 7;
int echo_pin_1 = 8;

////right
//int trig_pin_1 = 7;//3//0
//int echo_pin_1 = 8;//13





unsigned long sound_speed = 340; 
unsigned long time_count = 0;

unsigned long time_start = 0;
unsigned long time_end = 0;

char time_print[90];
unsigned long dist_val_middle = 0;
unsigned long dist_val_left = 0;
unsigned long dist_val_right = 0;


void get_sonar_dist() {
  
  // put your main code here, to run repeatedly:
  //Serial.println("Top of Loop");

  
  
  digitalWrite(trig_pin_2,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin_2,LOW);
  //analogWrite(trig_pin_1,

  
  time_count = pulseIn(echo_pin_2,HIGH);
  dist_val_middle = time_count * 0.34;//340,0.00034
    
//  snprintf(time_print,sizeof(time_print), "time_start %lu , time_end %lu, time_count %lu,dist_val_middle %lu", 
//  time_start,time_end,time_count,dist_val_middle);
  snprintf(time_print,sizeof(time_print), "IN MAIN SONAR dist_val_middle %lu", 
  dist_val_middle);



  //Serial.println(time_print);
  //end of middle

  
  digitalWrite(trig_pin_3,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin_3,LOW);
  
  time_count = pulseIn(echo_pin_3,HIGH);
  dist_val_left = time_count * 0.34;//340,0.00034
    
//  snprintf(time_print,sizeof(time_print), "time_start %lu , time_end %lu, time_count %lu,dist_val_left %lu", 
//  time_start,time_end,time_count,dist_val_left);
  snprintf(time_print,sizeof(time_print), "dist_val_left %lu", 
  dist_val_left);


 // Serial.println(time_print);
//end of LEFT


  digitalWrite(trig_pin_1,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin_1,LOW);
  //analogWrite(trig_pin_1,

  
  time_count = pulseIn(echo_pin_1,HIGH);
  dist_val_right = time_count * 0.34;//340,0.00034
    
//  snprintf(time_print,sizeof(time_print), "time_start %lu , time_end %lu, time_count %lu,dist_val_right %lu", 
//  time_start,time_end,time_count,dist_val_right);
  snprintf(time_print,sizeof(time_print), "dist_val_right %lu", 
  dist_val_right);


 //Serial.println(time_print);

  //delay_timer(1000);
}



void get_sonar_dist_mid() {
  
  // put your main code here, to run repeatedly:
  //Serial.println("Top of Loop");

  
  
  digitalWrite(trig_pin_2,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin_2,LOW);
  //analogWrite(trig_pin_1,

  
  time_count = pulseIn(echo_pin_2,HIGH);
  dist_val_middle = time_count * 0.34;//340,0.00034
    
  snprintf(time_print,sizeof(time_print), "time_start %lu , time_end %lu, time_count %lu,dist_val_middle %lu", 
  time_start,time_end,time_count,dist_val_middle);


//  Serial.println(time_print);
// 
  //delay(300);
}
