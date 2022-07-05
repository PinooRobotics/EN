int pot=A0; // The pin that the pot is atteched to

void setup() {
pinMode(pot,INPUT); // Initalize pot as an input.
Serial.begin(9600); // Initialize serial.


}

void loop() { // The loop function runs over and over again forever.


  Serial.println(analogRead(pot)); // Print value on the serial port
  }
