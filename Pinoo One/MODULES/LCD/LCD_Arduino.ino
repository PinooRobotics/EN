#include <LiquidCrystal_I2C.h> // Include the required libraries
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE); //Creates an LCD object.

void setup() {
lcd.begin(16,2); // LCD definition is made.
lcd.backlight(); // Lights are identified.
}

void loop() { // The loop function runs over and over again forever.
  int konum=16; // Its location is initially set to 16.
  while (konum>-5) {
    lcd.setCursor(konum,0);
    lcd.print("Helloo :)"); // Print "Hello :)" on the screen.
    konum=konum-1; //The position variable is decremented by 1.
    delay(500); //
    lcd.clear(); // Clean LCD

  }
}
