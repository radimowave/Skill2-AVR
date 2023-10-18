#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
	// initialize the LCD
	lcd.begin();

	// Turn on the blacklight and print a message.
	lcd.backlight();
   lcd.setCursor(1, 0); // ไปทตัวอักษรที่ 1 แถวที่ 1
	lcd.print("MetaRadiator");
  lcd.setCursor(1, 1); // ไปที่ตัวอักษรที่ 5 แถวที่ 2
  lcd.print("Pleases Wait...");
}

void loop()
{
	// Do nothing here...
}
