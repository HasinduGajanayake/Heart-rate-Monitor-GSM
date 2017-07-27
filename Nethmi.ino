
// include the library code:
#include <LiquidCrystal.h>
int x=0;
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
  x=analogRead(A0);
   lcd.print(x/10);
   delay(500);
   lcd.clear();
   delay(500);
}

