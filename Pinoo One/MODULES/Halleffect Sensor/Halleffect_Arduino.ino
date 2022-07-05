int hall=2; // The pin that the hall is atteched to

void setup() {

pinMode(hall,INPUT); //Initalize hall as an input.
Serial.begin(9600); //  Initialize serial.
}

void loop() { // The loop function runs over and over again forever.
Serial.println(digitalRead(hall)); // Print value on the serial port.
delay(500); 
}
