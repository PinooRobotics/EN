int ntc=A0; // The pin that the ntc is atteched to
void setup() {
pinMode(ntc,INPUT); // Initalize ntc as an input.
Serial.begin(9600); // Initialize serial..
}

void loop() { // The loop function runs over and over again forever.
Serial.println(analogRead(ntc)); //Print value on the serial port
delay(500); 
}
