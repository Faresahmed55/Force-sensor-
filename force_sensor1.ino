#include <LiquidCrystal.h>
int rs = 12;
int en = 11;
int D4 = 5;
int D5 = 4;
int D6 = 3;
int D7 = 2;
LiquidCrystal lcd(rs, en, D4, D5, D6, D7);
int forcePin = A0;
void setup() {
  lcd.begin(16, 2); 
  lcd.print("Force Sensor:");
  analogReference(DEFAULT); 
}

void loop() {
  int forceValue = analogRead(forcePin); 
  lcd.setCursor(0, 1);  
  lcd.print("Force: ");
  lcd.print(forceValue); 
  delay(500); 
  lcd.clear(); 
}