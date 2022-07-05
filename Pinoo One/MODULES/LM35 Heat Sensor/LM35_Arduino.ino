int lm=A0; // The pin that the lm is atteched to.

void setup() {
pinMode(lm,INPUT); //Initalize lm as an output
Serial.begin(9600); // Initialize serial.
}

void loop() { // The loop function runs over and over again forever.
Serial.println(analogRead(lm)); // Print value on the serial port.
delay(500); 
}
