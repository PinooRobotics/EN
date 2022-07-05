int ldr=A0; // The pin that the ldr is atteched to

void setup() {
Serial.begin(9600); // Initialize serial.
}

void loop() { // The loop function runs over and over again forever.
Serial.println(analogRead(ldr)); // Print value on the serial port..
delay(500); 
}
