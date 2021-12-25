#include <LiquidCrystal.h>              //include the LiquidCrystal library

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  //define LCD pins (RS, E, D4, D5, D6, D7)

void setup() {
  lcd.begin(16, 2);                       //specifies the dimensions
  lcd.print("   TECH DEIYO   ");
  lcd.setCursor(0, 1);
  lcd.print("    YOUTUBE  ");
  delay(5000);
  lcd.clear();
  lcd.print("Arduino Projects");
  lcd.setCursor(0, 1);
  lcd.print("   LCD DISPLAY");
  delay(5000);
  lcd.clear();
  lcd.print("   SUBSCRIBE");
  lcd.setCursor(0, 1);
  lcd.print("FOR MORE VIDEOS");
  delay(5000);
  lcd.clear();

}

void loop() {
  lcd.begin(16, 2);
  lcd.print("   TECH DEIYO   ");
  lcd.setCursor(0, 1);
  lcd.print("    YOUTUBE  ");
  delay(5000);
  lcd.clear();
  lcd.print("Arduino Projects");
  lcd.setCursor(0, 1);
  lcd.print("   SINHALA   ");
  delay(5000);
  lcd.clear();
  lcd.print("   SUBSCRIBE");
  lcd.setCursor(0, 1);
  lcd.print("FOR MORE VIDEOS");
  delay(5000);
  lcd.clear();

}
