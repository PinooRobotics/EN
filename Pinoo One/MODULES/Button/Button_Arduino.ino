int button=2; //the pin that the button is atteched to
void setup() {
 pinMode(button,INPUT); // Initalize LED as an input.
 Serial.begin(9600); // Initialize serial.
}

void loop() { // The loop function runs over and over again forever.

Serial.println(digitalRead(button)); // Print our value to the serial port.
delay(500); // 
}
