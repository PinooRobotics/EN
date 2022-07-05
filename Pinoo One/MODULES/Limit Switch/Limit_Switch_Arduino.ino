int limit=2; // The pin that the limit is atteched to
void setup() {
 pinMode(limit,INPUT); // Initalize limit as an input.
 Serial.begin(9600); //  Initialize serial..
}

void loop() { //The loop function runs over and over again forever.

Serial.println(digitalRead(limit)); // Print value on the serial port.
delay(500); 
}
