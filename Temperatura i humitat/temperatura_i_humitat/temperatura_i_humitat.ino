#include <DHT.h>
#include <DHT_U.h>

int SENSOR = 2;
int TEMPERATURA;
int HUMITAT;

DHT dht(SENSOR, DHT11);

void setup(){
  Serial.begin(9600);
  dht.begin();
}

void loop(){
  TEMPERATURA = dht.readTemperature();
  HUMITAT = dht.readHumidity();
  Serial.print("Temperatura: ");
  Serial.print(TEMPERATURA);
  Serial.print(" Humitat: ");
  Serial.println(HUMITAT);
  delay (500);
}
