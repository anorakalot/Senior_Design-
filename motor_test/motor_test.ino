//int motor_1_enc_a = 13;
//int motor_1_enc_b = 14;
//
//int motor_2_enc_a = 13;
//int motor_2_enc_b = 14;

int led_pin = 1;

int motor_driver_output_1_1 = 22;
int motor_driver_output_1_2 = 23;

int motor_driver_output_2_1 = 20;
int motor_driver_output_2_2 = 21;

//int encoder_count_left = 0;
//int encoder_count_right = 0;
//
//void left_encoder_update(){
//  encoder_count_left += 1;
//}
//
//
//void right_necoder_update(){
//  encoder_count_right += 1;
//}

int p_value;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
 // encoder_count_left_1 = 0;
  pinMode(motor_driver_output_1_1,OUTPUT);
 
  pinMode(motor_driver_output_1_2,OUTPUT);

  pinMode(motor_driver_output_2_1,OUTPUT);

  pinMode(motor_driver_output_2_2,OUTPUT);

  //attachInterrupt(digitalPinToInterrupt(motor_1_enc_a),left_encoder_update,CHANGE);
  //attachInterrupt(digitalPinToInterrupt(motor_1_enc_b),left_encoder_update,CHANGE);
  for (int i = 0; i < 3; i++){
    digitalWrite(led_pin,HIGH);
    delay(1000);
    digitalWrite(led_pin,LOW);
    delay(1000);  
  }
  Serial.println("STARTING MOTOR TEST");  
}

void forward(){
  digitalWrite(motor_driver_output_1_1,HIGH);
  digitalWrite(motor_driver_output_1_2,LOW);
  
}


void reverse(){
  digitalWrite(motor_driver_output_1_1,HIGH);
  digitalWrite(motor_driver_output_1_2,LOW);
  
}
void halt(){
  digitalWrite(motor_driver_output_1_1,LOW);
  digitalWrite(motor_driver_output_1_2,LOW);
}
void loop() {
  Serial.println("APPLES");
  // put your main code here, to run repeatedly:
  forward();
  delay(2000);
  halt();
  delay(2000);
}
