#include <LiquidCrystal.h>
LiquidCrystal LCD(10,9,5,4,3,2);

void setup() {
  // put your setup code here, to run once:
  LCD.begin(16,2);
  LCD.setCursor(0,0);
  LCD.print("Hello World!");
}

void loop() {
  LCD.setCursor(0,1);
  LCD.print("Hi there");
  delay(1000);
  LCD.setCursor(0,1);
  LCD.print("            ");
  delay(1000);
  // put your main code here, to run repeatedly:

}
