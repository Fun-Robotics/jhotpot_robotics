#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 4, 5, 6, 7);

void setup() 
{
	lcd.begin(16, 2);
	lcd.clear();
}
void loop() 
{
	lcd.print(" Hello world!");
	lcd.setCursor(0, 1);
	lcd.print(" Robotics");
}
