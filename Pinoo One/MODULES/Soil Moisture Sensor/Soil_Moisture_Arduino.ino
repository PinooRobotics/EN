int t=A0; //The pin that the t is atteched to

void setup() {
pinMode(t,INPUT); // Initalize t as an output 
Serial.begin(9600); // Initialize serial.
}

void loop() { //The loop function runs over and over again forever.
Serial.println(analogRead(t)); //Print value on the serial port.
delay(500); 
}
