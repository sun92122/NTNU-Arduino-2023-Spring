#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup()
{
  lcd.begin(16, 2);

  lcd.print("Hello, world!");
}

void loop()
{
  lcd.noBlink();

  delay(3000);

  lcd.blink();
  delay(3000);
}