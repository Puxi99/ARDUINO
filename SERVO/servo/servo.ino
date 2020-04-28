#include <Servo.h>

Servo servo;

int PINSERVO = 2;
int POLSMIN = 1000; //0º
int POLSMAX = 2000; //180º

void setup(){
  servo.attach(PINSERVO, POLSMIN, POLSMAX); //(pin del servo, minim, max)
}


void loop(){
  servo.write(0);
  delay(2000);
  servo.write(180);
  delay(2000);
}
