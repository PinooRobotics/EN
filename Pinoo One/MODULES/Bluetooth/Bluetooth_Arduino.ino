int DATA=0; // Give the value 0 to the DATA variable.

void setup() {
Serial.begin(9600); //Initialize serial.

}

void loop() { // The loop function runs over and over again forever.
 if (Serial.available()>0) { //If the connection with Bluetooth is completed, we ensure that the process continues.
  DATA=Serial.read(); // Assign the incoming variable to the "DATA" variable.
  Serial.println(DATA); //Print the data coming to the serial port.
 
 
  
  }
}
