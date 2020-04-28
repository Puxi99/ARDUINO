#include <Key.h>
#include <Keypad.h>

const byte F = 4;
const byte C = 4;
char keys[F][C] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte pinsF[F] = {9,8,7,6};
byte pinsC[C] = {5,4,3,2};

Keypad teclat = Keypad(makeKeymap(keys),pinsF,pinsC,F,C);  //tot aquest bloc es igual cada vegada que utilitzem el teclat.

char TECLA;  //aquesta variable ha de ser del tipus "char" per tal que a lutilitzar el teclat, aquest ens doni un element de tipus: caracter.
char CLAU[7];
char CLAU_MESTRA[7] = "123456";
byte INDEX = 0;


void setup(){
  Serial.begin(9600);
}

void loop(){
  TECLA = teclat.getKey();
  if (TECLA){
    CLAU[INDEX] = TECLA;
    INDEX++;
    Serial.print(TECLA);
  }
  if (INDEX == 6){
    if (!strcmp(CLAU,CLAU_MESTRA))
      Serial.println(" Correcta!!");
    else
    Serial.println(" Incorrecta :_(");
    INDEX = 0;
  }
  
}
