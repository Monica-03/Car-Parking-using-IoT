//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
}


void loop()
{
  if(digitalRead(A0)==HIGH&&digitalRead(A1)==HIGH&&digitalRead(A2)==HIGH)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("    CAR SLOT");
    lcd.setCursor(0,1);
    lcd.print("     NO - 3");
  delay(200);
  }
  if(digitalRead(A0)==LOW&&digitalRead(A1)==HIGH&&digitalRead(A2)==HIGH)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("    CAR SLOT");
    lcd.setCursor(0,1);
    lcd.print("     NO - 2");
  delay(200);
  }
  if(digitalRead(A1)==LOW&&digitalRead(A0)==HIGH&&digitalRead(A2)==HIGH)
  {    
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("    CAR SLOT");
    lcd.setCursor(0,1);
    lcd.print("     NO - 2");
  delay(200);
  }
  if(digitalRead(A2)==LOW&&digitalRead(A0)==HIGH&&digitalRead(A1)==HIGH)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("    CAR SLOT");
    lcd.setCursor(0,1);
    lcd.print("     NO - 2");
  delay(200);
  }

  if(digitalRead(A0)==LOW&&digitalRead(A1)==LOW&&digitalRead(A2)==HIGH)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("    CAR SLOT");
    lcd.setCursor(0,1);
    lcd.print("     NO - 1");
  delay(200);
  }
  if(digitalRead(A1)==LOW&&digitalRead(A2)==LOW&&digitalRead(A0)==HIGH)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("    CAR SLOT");
    lcd.setCursor(0,1);
    lcd.print("     NO - 1");
  delay(200);
  }
  if(digitalRead(A2)==LOW&&digitalRead(A0)==LOW&&digitalRead(A1)==HIGH)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("    CAR SLOT");
    lcd.setCursor(0,1);
    lcd.print("     NO - 1");
  delay(200);
  }

  if(digitalRead(A0)==LOW&&digitalRead(A1)==LOW&&digitalRead(A2)==LOW)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("    CAR SLOT");
    lcd.setCursor(0,1);
    lcd.print("     NO - 0");
  delay(200);
  }
  delay(200);
}