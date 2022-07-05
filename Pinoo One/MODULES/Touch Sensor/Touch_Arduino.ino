int touch=2; // The pin that the touch is atteched to.
void setup() {
 pinMode(touch,INPUT); // Initalize touch as an output.
 Serial.begin(9600); // Initialize serial.
}

void loop() { // The loop function runs over and over again forever.

Serial.println(digitalRead(touch)); // Print our value on the serial port.
delay(500); 
}
