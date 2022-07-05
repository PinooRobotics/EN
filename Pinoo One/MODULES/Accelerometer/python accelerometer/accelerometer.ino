#include <Wire.h>  //Include the required libraries.
#include <ADXL345.h>  


ADXL345 adxl;  //The variable adxl is set as an instance of the ADXL345 library..

void setup(){
  Serial.begin(9600); //  Initialize serial.
  adxl.powerOn();

     //Set activity/inactivity thresholds (0-255)
  adxl.setActivityThreshold(75);  //62.5mg per increase
  adxl.setInactivityThreshold(75); 
  adxl.setTimeInactivity(10); //How many seconds is the event inactive?

 //How many seconds is the event inactive?
  adxl.setActivityX(1);
  adxl.setActivityY(1);
  adxl.setActivityZ(1);
 
   
  // View of Inactivity motion on this axis - 1 == on; 0 == off
  adxl.setInactivityX(1);
  adxl.setInactivityY(1);
  adxl.setInactivityZ(1);
  
 // Appearance of touch gesture on this axis - 1 == on; 0 == off
  adxl.setTapDetectionOnX(0);
  adxl.setTapDetectionOnY(0);
  adxl.setTapDetectionOnZ(1);
 
  // Set values for what is a tap and what is a double tap (0-255)
  adxl.setTapThreshold(50); 
  adxl.setTapDuration(15); 
  adxl.setDoubleTapLatency(80);
  adxl.setDoubleTapWindow(200); 
 
// Set values for what is considered free fall (0-255)
  adxl.setFreeFallThreshold(7); 
  adxl.setFreeFallDuration(45); 
 
   //Setting all interrupts to occur on int pin 1
  adxl.setInterruptMapping( ADXL345_INT_SINGLE_TAP_BIT,   ADXL345_INT1_PIN );
  adxl.setInterruptMapping( ADXL345_INT_DOUBLE_TAP_BIT,   ADXL345_INT1_PIN );
  adxl.setInterruptMapping( ADXL345_INT_FREE_FALL_BIT,    ADXL345_INT1_PIN );
  adxl.setInterruptMapping( ADXL345_INT_ACTIVITY_BIT,     ADXL345_INT1_PIN );
  adxl.setInterruptMapping( ADXL345_INT_INACTIVITY_BIT,   ADXL345_INT1_PIN );

  
  // Save interrupt actions - 1 == on; 0 == off
  adxl.setInterrupt( ADXL345_INT_SINGLE_TAP_BIT, 1);
  adxl.setInterrupt( ADXL345_INT_DOUBLE_TAP_BIT, 1);
  adxl.setInterrupt( ADXL345_INT_FREE_FALL_BIT,  1);
  adxl.setInterrupt( ADXL345_INT_ACTIVITY_BIT,   1);
  adxl.setInterrupt( ADXL345_INT_INACTIVITY_BIT, 1);
}

void loop(){  // The loop function runs over and over again forever.
  
	int x,y,z;   //Read accelerometer values and store them in x, y, z variables
	adxl.readXYZ(&x, &y, &z); 
	Serial.print("values of X , Y , Z: ");
//Print x, y, z values to the screen with the print command
	Serial.print(x);
	Serial.print(" , ");
	Serial.print(y);
	Serial.print(" , ");
	Serial.println(z);
	
	double xyz[3];
	double ax,ay,az;
	adxl.getAcceleration(xyz);
	ax = xyz[0];
	ay = xyz[1];
	az = xyz[2];
	Serial.print("X=");
	Serial.print(ax);
    Serial.println(" g");
	Serial.print("Y=");
	Serial.print(ay);
    Serial.println(" g");
	Serial.print("Z=");
	Serial.print(az);
    Serial.println(" g");
	Serial.println("**********************");
	delay(500);
 
}
