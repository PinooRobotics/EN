int motor1=5; //The motor connection pins is defined.
int motor2=6;


void setup() {
  pinMode(motor1,OUTPUT); //Initalize motor as an output
  pinMode(motor2,OUTPUT);


}

void loop() { //The loop function runs over and over again forever
  digitalWrite(motor1,HIGH); //By setting the motor1 pin high and the motor2 pin low, the motor is enabled to move.
  digitalWrite(motor2,LOW);
  delay(1000); 
  digitalWrite(motor1,LOW); //motor1 and motor2 pins are set low and the motor is stopped.
  digitalWrite(motor2,LOW);
  delay(1000); 
}
