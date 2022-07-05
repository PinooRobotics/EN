int relay=2; // The pin that the relay is atteched to

void setup() {
 pinMode(relay,OUTPUT); // Initalize relay as an output.
}

void loop() { // The loop function runs over and over again forever.

digitalWrite(relay,HIGH); // turn the relay on.
delay(3000); 
digitalWrite(relay,LOW); // turn the relay off
delay(3000); 
}
