int water=A0; // The pin that the water is atteched to.

void setup() {

pinMode(water,INPUT); // Initalize water as an output.
Serial.begin(9600); // Initialize serial.

}

void loop() { // The loop function runs over and over again forever.
Serial.println(analogRead(water)); // Print value on the serial port.
delay(500); // 
}
