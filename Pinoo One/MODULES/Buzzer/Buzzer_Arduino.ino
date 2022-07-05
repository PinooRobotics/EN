int buzzerPin=2; // The pin that the buzzerPin is atteched to

void setup() {
 pinMode(buzzerPin,OUTPUT); //Initalize BUZZER as an output

}

void loop() { // The loop function runs over and over again forever
 digitalWrite(buzzerPin,HIGH); // turn the BUZZER on 
 delay(1000); 
 digitalWrite(buzzerPin,LOW); // turn the BUZZER off
 delay(1000); 

}
