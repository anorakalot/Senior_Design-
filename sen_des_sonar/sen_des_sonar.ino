int trig_pin_1 = 0;//3//0
int echo_pin_1 = 2;//13

int led_pin = 1;

unsigned long sound_speed = 340; 
unsigned long time_count = 0;

unsigned long time_start = 0;
unsigned long time_end = 0;

char time_print[90];
int dist_val = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(trig_pin_1,OUTPUT);
  pinMode(echo_pin_1,INPUT);

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

  
  
  digitalWrite(trig_pin_1,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin_1,LOW);
  //analogWrite(trig_pin_1,

  
  //time_start = micros();
//  Serial.println(time_start);
//  while(digitalRead(echo_pin_1) == HIGH){//maybe read pin directly no arduino function
//    //timer_counter += 1;
//    time_end = micros();
//  }
  //time_count = time_end - time_start;

  //gonna try using pulsein function
  time_count = pulseIn(echo_pin_1,HIGH);
  dist_val = time_count * 0.34;//340,0.00034
  //dist_val = (dist_val /2);
    
  snprintf(time_print,sizeof(time_print), "time_start %lu , time_end %lu, time_count %lu,dist_val %lu", 
  time_start,time_end,time_count,dist_val);


  Serial.println(time_print);

  delay(500);
}
