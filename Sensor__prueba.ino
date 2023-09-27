#include <DHT.h>
#include <DS3231.h>
#include <LiquidCrystal.h>

#define DHTPIN 3  //Azul abajo
#define DHTTYPE DHT11
#define DHTIPO DHT22
#define DHTPIN1 9 //Blanco 1
#define DHTPIN2 8  // Blanco 2 
#define DHTPIN3 11  // Azul Salida
#define DHTPIN4 10 // Azul
#define DHTPIN5 6 // Blanco
#define DHTPIN6 7 //Blanco
#define DHTPIN7 12 // Blanco
//#define DHTPIN 13 //Blanco


DHT dht(DHTPIN, DHTTYPE); //DHT11
DHT dht1(DHTPIN1, DHTIPO);//DHT22
DHT dht2(DHTPIN2, DHTIPO);//DHT22
DHT dht3(DHTPIN3, DHTTYPE);//DHT11
DHT dht4(DHTPIN4, DHTTYPE);//DHT11
DHT dht5(DHTPIN5, DHTIPO); //DHT22
DHT dht6(DHTPIN6, DHTIPO);
DHT dht7(DHTPIN7, DHTIPO);
//DHT dht8(DHTPIN8, DHTIPO);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht1.begin();
  dht2.begin();
  dht.begin();
  dht3.begin();
  dht4.begin();//DHT11
  dht5.begin(); //DHT22
  dht6.begin();
  dht7.begin();
  //dht8.begin();
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

  float t5=dht4.readTemperature();
  float h5=dht4.readHumidity();
  float indiceCalor5=dht4.computeHeatIndex(t5,h5,false);

  float t6=dht5.readTemperature();
  float h6=dht5.readHumidity();
  float indiceCalor6=dht5.computeHeatIndex(t6,h6,false);
  
  float t7=dht6.readTemperature();
  float h7=dht6.readHumidity();
  float indiceCalor7=dht6.computeHeatIndex(t7,h7,false);

  float t8=dht7.readTemperature();
  float h8=dht7.readHumidity();
  float indiceCalor8=dht7.computeHeatIndex(t8,h8,false);

  
  
  
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

  Serial.print("Temperatura 5: ");
  Serial.print(t5);
  Serial.print("°C - Humedad 5: ");
  Serial.print(h5);
  Serial.print("% - Índice de Calor 5: ");
  Serial.print(indiceCalor5);
  Serial.println();

  Serial.print("Temperatura 6: ");
  Serial.print(t6);
  Serial.print("°C - Humedad 6: ");
  Serial.print(h6);
  Serial.print("% - Índice de Calor 6: ");
  Serial.print(indiceCalor6);
  Serial.println();

  Serial.print("Temperatura 7: ");
  Serial.print(t7);
  Serial.print("°C - Humedad 7: ");
  Serial.print(h7);
  Serial.print("% - Índice de Calor 7: ");
  Serial.print(indiceCalor7);
  Serial.println();

  Serial.print("Temperatura 8: ");
  Serial.print(t8);
  Serial.print("°C - Humedad 8: ");
  Serial.print(h8);
  Serial.print("% - Índice de Calor 8: ");
  Serial.print(indiceCalor8);
  Serial.println();
  

  

  delay(1000);


}
