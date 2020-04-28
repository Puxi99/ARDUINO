#include <LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2);

void setup(){
  lcd.begin(16,2);  //Files, columnes
}

void loop(){
  lcd.setCursor(0,0); //inicia el cursor del liquidcrystal al punt 00 ja que les files son[0,1] i les columnes [0,1,...16]
  lcd.print("Hola Món!!");
  lcd.setCursor(0,1); //posem el cursor a la columna 0 de la segona fila
  lcd.print("Tinc ");
  lcd.print(millis() / 1000);
  lcd.print(" seg. viu");
}
