int pir=2; //The pin that the piris atteched to

void setup() {

pinMode(pir,INPUT); // Initalize pir as an input.
Serial.begin(9600); // Initialize serial.
}

void loop() { //The loop function runs over and over again forever.
Serial.println(digitalRead(pir)); //Print value on the serial port.
delay(500); 
}
