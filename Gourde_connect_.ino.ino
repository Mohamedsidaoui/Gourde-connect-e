#include <DHT.h>
#include <Wire.h>
#include "SHTSensor.h"
#include <FastLED.h>

#define brocheDeBranchementDHT1 6     // Pour le premier capteur DHT (près de la gourde)
#define brocheDeBranchementDHT2 8     // Pour le deuxième capteur DHT (à l'extérieur)
#define typeDeDHT DHT22


//Initialisation des capteurs DHT22
DHT dht1(brocheDeBranchementDHT1, typeDeDHT);//for first DHT module
DHT dht2(brocheDeBranchementDHT2, typeDeDHT);// for 2nd DHT module and do the same for 3rd and 4th etc.

float getTemp(int dhtCount)
{

  if(dhtCount ==1){
    // Lire le Taux d'humidité
    float h1 = dht1.readHumidity();
    // Lire la température en Celsius
    float t1 = dht1.readTemperature();
    return(t1);
         

  }// DHT1 end


  if(dhtCount ==2){
    // Read temperature as Celsius (the default)
    float t2 = dht2.readTemperature();
    return(t2);

  }
}

void setup() {
  Serial.begin(9600);
  Serial.println("Activation de la gourde connecté !");
  Serial.println("=====================");

  dht1.begin();//for first DHT module
  dht2.begin();//for 2nd DHT module  and do the same for 3rd and 4th etc.
}

void loop() {

  float t1;
  float t2;
  int h1;

  t1 = getTemp(1);
  h1 = dht1.readHumidity();
  t2 = getTemp(2);
  
  Serial.print("Température de la gourde = ");
  Serial.print(t1);
  Serial.println(" °C");
  if (h1 < 98) {
  Serial.print("Taux d'humidité près de la gourde = ");
  Serial.print(h1);
  Serial.println(" %");
  }
  else {
    Serial.println("Taux d'humidité trop élevé, veuillez enlever le capteur.");
  }
  Serial.print("Température extérieur = ");
  Serial.print(t2);
  Serial.println(" °C");
     if (dht2.readTemperature()>20); {
      Serial.println("Température extérieur trop élevé, veuillez déplacer la gourde.");
    }

  delay(2000);
}