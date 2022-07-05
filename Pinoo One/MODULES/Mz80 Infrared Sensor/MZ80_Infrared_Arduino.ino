int mz=2; // The pin that the mz is atteched to
void setup() {
 pinMode(mz,INPUT); // Initalize mz as an input.
 Serial.begin(9600); //Seri haberleşmeyi başlatıyoruz.
}

void loop() { //The loop function runs over and over again forever.

Serial.println(digitalRead(mz)); // Print value on the serial port.
delay(500);
}
