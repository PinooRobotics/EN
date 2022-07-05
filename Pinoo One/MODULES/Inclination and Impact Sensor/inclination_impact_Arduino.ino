int impact=2; // The pin that the impact is atteched to
void setup() {
 pinMode(impact,INPUT); // Initalize impact as an input.
 Serial.begin(9600); //  Initialize serial.
}

void loop() { // The loop function runs over and over again forever.

Serial.println(digitalRead(impact)); // Print value on the serial port.
delay(500); 
}
