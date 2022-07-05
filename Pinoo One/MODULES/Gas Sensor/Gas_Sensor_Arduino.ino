int gas=A0; // The pin that the gas is atteched to

void setup() {
pinMode(gas,INPUT); // Initalize gas as an input.
Serial.begin(9600); // Initialize serial.
}

void loop() { // The loop function runs over and over again forever
Serial.println(analogRead(gas)); // Print value on the serial port.
delay(500); 
}
