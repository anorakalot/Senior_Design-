void forward(){
  digitalWrite(motor_driver_output_1_1,HIGH);
  digitalWrite(motor_driver_output_1_2,LOW);

  digitalWrite(motor_driver_output_2_1,HIGH);
  digitalWrite(motor_driver_output_2_2,LOW);

}

void forward_w_speed(int speed_value_l, int speed_value_r){
  analogWrite(motor_driver_output_1_1,speed_value_l);
  digitalWrite(motor_driver_output_1_2,LOW);

  analogWrite(motor_driver_output_2_1,speed_value_r);
  digitalWrite(motor_driver_output_2_2,LOW);

}

void reverse(){
  digitalWrite(motor_driver_output_1_1,LOW);
  digitalWrite(motor_driver_output_1_2,HIGH);
  digitalWrite(motor_driver_output_2_1,LOW);
  digitalWrite(motor_driver_output_2_2,HIGH);
}


void left_turn(){
  digitalWrite(motor_driver_output_1_1,LOW);
  digitalWrite(motor_driver_output_1_2,HIGH);

  digitalWrite(motor_driver_output_2_1,HIGH);
  digitalWrite(motor_driver_output_2_2,LOW);
}

void right_turn(){
  digitalWrite(motor_driver_output_1_1,HIGH);
  digitalWrite(motor_driver_output_1_2,LOW);

  digitalWrite(motor_driver_output_2_1,LOW);
  digitalWrite(motor_driver_output_2_2,HIGH);
}

void halt(){
  digitalWrite(motor_driver_output_1_1,LOW);
  digitalWrite(motor_driver_output_1_2,LOW);
  digitalWrite(motor_driver_output_2_1,LOW);
  digitalWrite(motor_driver_output_2_2,LOW);
}
