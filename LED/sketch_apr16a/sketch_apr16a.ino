void setup(){
  pinMode(13, OUTPUT);    //escull el pin 13 com a sortida
}

void loop(){
  digitalWrite(13, HIGH);   //estableix que el pin 13 estara a 1
  delay(1000);    //ve a ser un WAIT com a vhdl
  digitalWrite(13, LOW);
  delay(1000);
}
