int x=A2, y=A3; // Define pins.

void setup() {
Serial.begin(9600); //  Initialize serial.
}

void loop() { // The loop function runs over and over again forever.
int right=analogRead(x); // Assign a variable for the sensor on the right.
int left=analogRead(y); // Assign a variable for the sensor on the left.

Serial.print(right); // Print the right side to the serial port.
Serial.print(",");
Serial.println(left); // Print the left side to the serial port
delay(100); 
}
