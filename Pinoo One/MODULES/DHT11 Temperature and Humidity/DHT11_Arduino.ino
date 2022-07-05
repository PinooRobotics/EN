#include <DHT11.h> // Include the required libraries.
int pin=2; // The pin that the  is atteched to
DHT11 dht11(pin); // name pin "dht11".
void setup()
{
  Serial.begin(9600); // Initialize serial.
}
void loop() // The loop function runs over and over again forever.
{
  float humidity,temperature;
  int READ = dht11.read(humidity,temperature); // name the value that the sensor reads.
  Serial.print(humidity); // print the humidity value to the serial port.
  Serial.print(","); 
  Serial.print(temperature);// print the temperature value to the serial port.
  Serial.println();
  delay(2000);  
}
