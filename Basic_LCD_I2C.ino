#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
	// initialize the LCD
	lcd.begin();
}

void loop()
{
	lcd.clear();                 // clear display
  lcd.setCursor(0, 0);         // move cursor to   (0, 0)
  lcd.print("Myduino KKU");        // print message at (0, 0)
  lcd.setCursor(2, 1);         // move cursor to   (2, 1)
  lcd.print("Get  Started");   // print message at (2, 1)
  delay(2000);                 // display the above for two seconds

  lcd.clear();                  // clear display
  lcd.setCursor(3, 0);          // move cursor to   (3, 0)
  lcd.print("MetaRadiator");        // print message at (3, 0)
  lcd.setCursor(5, 1);          // move cursor to   (5, 1)
  lcd.print("ESE-KKU");         // print message at (0, 1)
  delay(2000);                  // display the above for two seconds
}
