// include the library code:
#include <LiquidCrystal.h>  //This library should be downloaded

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7,8,9,10,11,12);



void setup()
{
// set up the LCD's number of columns and rows:
lcd.begin(16, 2); 
lcd.clear();
lcd.print("Hello Taufique!");

}

void loop()
{

lcd.setCursor(0,1); // Sets the cursor to col 1 and row 0
lcd.print(millis()/1000); // number of milliseconds the arduino was reset
}
