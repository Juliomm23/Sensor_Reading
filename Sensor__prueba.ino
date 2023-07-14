#include <DHT.h>
#include <DS3231.h>
#include <LiquidCrystal.h>

#define DHTPIN 3  //Azul abajo
#define DHTTYPE DHT11
#define DHTIPO DHT22
#define DHTPIN1 9 //Blanco 1
#define DHTPIN2 8  // Blanco 2 
#define DHTPIN3 11  // Salida

DHT dht(DHTPIN, DHTTYPE);
DHT dht1(DHTPIN1, DHTIPO);//DHT22
DHT dht2(DHTPIN2, DHTIPO);//DHT22
DHT dht3(DHTPIN3, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht1.begin();
  dht2.begin();
  dht.begin();
  dht3.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  //Sensor3
  float h3 = dht.readHumidity();
  // Leemos la temperatura en grados centígrados (por defecto)
  float t3 = dht.readTemperature();
  float indiceCalor3=dht.computeHeatIndex(t3,h3,false);
  
  float temperatura1 = dht1.readTemperature();
  float humedad1 = dht1.readHumidity();
  float indiceCalor1 = dht1.computeHeatIndex(temperatura1,humedad1,false);

  float temperatura2 = dht2.readTemperature();
  float humedad2 = dht2.readHumidity();
  float indiceCalor2 = dht2.computeHeatIndex(temperatura2,humedad2,false);

  float t4=dht3.readTemperature();
  float h4=dht3.readHumidity();
  float indiceCalor4=dht3.computeHeatIndex(t4,h4,false);
 
  Serial.print("Temperatura 1: ");
  Serial.print(temperatura1);
  Serial.print("°C - Humedad 1: ");
  Serial.print(humedad1);
  Serial.print("% - Índice de Calor 1: ");
  Serial.print(indiceCalor1);
  Serial.println();

  Serial.print("Temperatura 2: ");
  Serial.print(temperatura2);
  Serial.print("°C - Humedad 2: ");
  Serial.print(humedad2);
  Serial.print("% - Índice de Calor 2: ");
  Serial.print(indiceCalor2);
  Serial.println();

  Serial.print("Temperatura 3: ");
  Serial.print(t3);
  Serial.print("°C - Humedad 3: ");
  Serial.print(h3);
  Serial.print("% - Índice de Calor 3: ");
  Serial.print(indiceCalor3);
  Serial.println();

  Serial.print("Temperatura 4: ");
  Serial.print(t4);
  Serial.print("°C - Humedad 4: ");
  Serial.print(h4);
  Serial.print("% - Índice de Calor 4: ");
  Serial.print(indiceCalor4);
  Serial.println();
  

  delay(1000);


}
