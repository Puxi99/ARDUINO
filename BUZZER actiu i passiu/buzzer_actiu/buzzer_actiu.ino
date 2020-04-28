#define PULSADOR 2
#define BUZZER 8

void setup(){
  pinMode (PULSADOR, INPUT_PULLUP);
  pinMode (BUZZER, OUTPUT);
}

void loop(){
  if (digitalRead(PULSADOR) == LOW){
    for (int i = 0; i < 5; i++){
      digitalWrite(BUZZER, HIGH);
      delay(500);
      digitalWrite(BUZZER, LOW);
      delay(500);
    }
  }
}
