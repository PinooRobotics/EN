int flame=2; // the pin that the flame is atteched to
void setup() {
 pinMode(flame,INPUT); // initalize flame as an input
 Serial.begin(9600); // initialize serial
}

void loop() { // the loop function runs over and over again forever

Serial.println(digitalRead(flame)); //read sensor value
delay(500); // delay
}
