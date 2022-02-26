//left
int trig_pin_3 = 11;
int echo_pin_3 = 12;

//middle
int trig_pin_2=9;
int echo_pin_2=10;

////right
//int trig_pin_1 = 7;//3//0
//int echo_pin_1 = 8;//13





int led_pin = 1;

unsigned long sound_speed = 340; 
unsigned long time_count = 0;

unsigned long time_start = 0;
unsigned long time_end = 0;

char time_print[90];
unsigned long dist_val_middle = 0;
unsigned long dist_val_left = 0;
void setup() {
  // put your setup code here, to run once:
//  pinMode(trig_pin_1,OUTPUT);
//  pinMode(echo_pin_1,INPUT);

  pinMode(trig_pin_2,OUTPUT);
  pinMode(echo_pin_2,INPUT);

  pinMode(trig_pin_3,OUTPUT);
  pinMode(echo_pin_3,INPUT);
  

  pinMode(led_pin,OUTPUT);
  for (int i = 0; i < 3; i++){
    digitalWrite(led_pin,HIGH);
    delay(500);
    digitalWrite(led_pin,LOW);
    delay(500);  
  }
  Serial.println("STARTING SONAR");
}

void loop() {
  
  // put your main code here, to run repeatedly:
  Serial.println("Top of Loop");

  
  
  digitalWrite(trig_pin_2,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin_2,LOW);
  //analogWrite(trig_pin_1,

  
  //time_start = micros();
//  Serial.println(time_start);
//  while(digitalRead(echo_pin_1) == HIGH){//maybe read pin directly no arduino function
//    //timer_counter += 1;
//    time_end = micros();
//  }
  //time_count = time_end - time_start;

  //gonna try using pulsein function
  time_count = pulseIn(echo_pin_2,HIGH);
  dist_val_middle = time_count * 0.34;//340,0.00034
  //dist_val = (dist_val /2);
    
  snprintf(time_print,sizeof(time_print), "time_start %lu , time_end %lu, time_count %lu,dist_val_middle %lu", 
  time_start,time_end,time_count,dist_val_middle);



  Serial.println(time_print);
  //end of middle

  
  digitalWrite(trig_pin_3,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin_3,LOW);
  //analogWrite(trig_pin_1,

  
  //time_start = micros();
//  Serial.println(time_start);
//  while(digitalRead(echo_pin_1) == HIGH){//maybe read pin directly no arduino function
//    //timer_counter += 1;
//    time_end = micros();
//  }
  //time_count = time_end - time_start;

  //gonna try using pulsein function
  time_count = pulseIn(echo_pin_3,HIGH);
  dist_val_left = time_count * 0.34;//340,0.00034
  //dist_val = (dist_val /2);
    
  snprintf(time_print,sizeof(time_print), "time_start %lu , time_end %lu, time_count %lu,dist_val_left %lu", 
  time_start,time_end,time_count,dist_val_left);



  Serial.println(time_print);

  delay(500);
}
