#include <SoftwareSerial.h> // Include the required libraries.
SoftwareSerial HC06(0, 1); 

int LED = 2;  //The pin that the LED is atteched to.

void setup() {
  HC06.begin(9600);  // Initialize serial.
  pinMode(LED, OUTPUT); // Initalize LED as an output
}

void loop() { // The loop function runs over and over again forever.

  if(HC06.available() > 0)               //  Preparing a setup to send energy to the door where our led is in case of data, and not to send it if the connection cannot be established.
  {
    char receive = HC06.read(); 
    if(receive == '1') 
    {
      digitalWrite(LED, HIGH); // Turn the LED on (HIGH is the voltage level)
    }
    else digitalWrite(LED, LOW); // turn the LED off (LOW is the voltage level)
  }

}
