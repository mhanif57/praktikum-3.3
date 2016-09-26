#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);

void setup() {
lcd.begin(16,2);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Analog digital pinA0");
analogReference(EXTERNAL);
}

void loop() {
unsigned int dataADC = analogRead(A0);
lcd.setCursor(0,1);
lcd.print("nilai = ");
lcd.print(dataADC);
delay(100);
}
