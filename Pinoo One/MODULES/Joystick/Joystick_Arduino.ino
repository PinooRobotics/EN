int x=A2;  // Define pins.
int y=A3;

void setup() {
Serial.begin(9600); // Initialize serial.
}

void loop() { // The loop function runs over and over again forever.
int joyx=analogRead(x); // Set a variable for the x-axis.
int joyy=analogRead(y); // Set a variable for the y-axis.

Serial.print(joyx); // Print x-axis on the serial port.
Serial.print(",");
Serial.println(joyy); // Print y-axis on the serial port.
delay(100); 
}
