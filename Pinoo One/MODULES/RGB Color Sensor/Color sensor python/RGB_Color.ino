#include <Wire.h> // Include the required libraries.
#include "Adafruit_TCS34725.h"
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X); 

void setup(void) {
  Serial.begin(9600); // Initialize serial.
  if (tcs.begin()) { // Communicating with the sensor.
    Serial.println("Sensor found"); // If the sensor is found, the text to be written on the serial port.
  } else {
    Serial.println("TCS34725 not found... Please check your connection."); // If the sensor is not found, the text to be written on the serial port.
    while (1);
  }

}

void loop(void) { // The loop function runs over and over again forever.
  uint16_t r, g, b, c, colorTemp, lux;
  tcs.getRawData(&r, &g, &b, &c);
  colorTemp = tcs.calculateColorTemperature_dn40(r, g, b, c);
  lux = tcs.calculateLux(r, g, b);
 
if (r > 1000 && g < 600 && b < 600) {  //Define the color red.
  Serial.println("KIRMIZI");
}
if (r > 1000 && g > 1000 && b<1000) { // YDefine the color grenn.
  Serial.println("YEŞİL");
}

 Serial.print("Color Temp: "); Serial.print(colorTemp, DEC); Serial.print(" K - ");
  Serial.print("Lux: "); Serial.print(lux, DEC); Serial.print(" - ");
  Serial.print("R: "); Serial.print(r, DEC); Serial.print(" "); // Print the red color on the serial port.
  Serial.print("G: "); Serial.print(g, DEC); Serial.print(" "); // Print the green color on the serial port.
  Serial.print("B: "); Serial.print(b, DEC); Serial.print(" "); // Print the yellow color on the serial port.
  Serial.print("C: "); Serial.print(c, DEC); Serial.print(" "); 
  Serial.println(" ");
}
