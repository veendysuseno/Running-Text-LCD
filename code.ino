/*
    Program Running Text LCD
*/
#include <LiquidCrystal.h>  //Pendeklarasian Library

const int PIN_RS = 12;  // Pemilihan Pin dan pendeklarasian variabel
const int PIN_E = 11;
const int PIN_DB_4 = 5;
const int PIN_DB_5 = 4; 
const int PIN_DB_6 = 3;
const int PIN_DB_7 = 2;
LiquidCrystal lcd(PIN_RS, PIN_E, PIN_DB_4, PIN_DB_5, PIN_DB_6, PIN_DB_7);

void setup() {
  lcd.begin(16, 2);  //Pengaturan LCD
}

void loop() { //Perulangan Program
int i;
lcd.setCursor(0, 0);
  lcd.print("Halo!");  //Kata yang Berjalan
for (i = 0 ; i < 16; i++){
lcd.scrollDisplayRight();
delay(250);
}
}
