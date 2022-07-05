#include <Servo.h> // Include the required libraries.
Servo servo; // Assign variables using the servo library.

void setup() {
servo.attach(2); // The pin that the servo is atteched to.
}

void loop() { //The loop function runs over and over again forever.


  servo.write(90); // determine a 90 degree angle.
  delay(1000); 
  servo.write(0); //determine a 0 degree angle.
  delay(1000); 
  }
