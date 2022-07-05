int led=2; // The pin that the led is atteched to.

void setup() {

pinMode(led,OUTPUT); //Initalize led as an output
}

void loop() { // The loop function runs over and over again forever.
digitalWrite(led,HIGH); //turn the LED on (HIGH is the voltage level)

delay(100);
digitalWrite(led,LOW); // turn the LED off (LOW is the voltage level)

delay(100); 

}
