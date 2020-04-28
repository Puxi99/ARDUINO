void setup(){
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
}

void loop(){
  if (digitalRead(2) == HIGH){
    digitalWrite(3, HIGH);
  }
  else{
    digitalWrite(3, LOW);
  }
}

//digitalWrite --> escull el pin i escriu el valor de la sortida
//digitalRead --> escull el pin i llegeix el valor de l'entrada
