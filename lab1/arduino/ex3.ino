#include <MyKeypad.h>
#include <LiquidCrystal.h>
#include <Led.h>

#define GREEN_LED_PIN 23
#define RED_LED_PIN 22

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte rowPins[4] = {30, 31, 32, 33}; 
byte colPins[4] = {47, 48, 49, 50}; 
char secretKey = '5';
Led green(GREEN_LED_PIN);
Led red(RED_LED_PIN);

MyKeypad customKeypad(rowPins, colPins);

void setup() {
  lcd.begin(16,2);
  lcd.print("Enter number");  
}

void loop() {
  char customKey = customKeypad.getKey();
  if (customKey)
  {
    lcd.clear();
    if (customKey == secretKey)
    {
      green.on();
      red.off();
      lcd.print("VALID");
    }
    else
    {
      lcd.print("INVALID");
      green.off();
      red.on();
    }
  }
}
