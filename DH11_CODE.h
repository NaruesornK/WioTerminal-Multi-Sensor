#include "DHT.h"
#define DHTPIN BCM25
#define DHTTYPE DHT11 
DHT dht(DHTPIN, DHTTYPE);

float h ;
float c ;
float f ;
int timer_DH11;


void start_DH11()
{
dht.begin();
timer_DH11 = millis();
}

void Read_DHT11()
{ 
    if (millis() > timer_DH11+100)
    {
      h = dht.readHumidity();
      c = dht.readTemperature();
      f = dht.readTemperature(true);

/*
        Serial.println(String("Humidity: ")+String(h)+String(" %"));
        Serial.println(String("Temperature: ")+String(c)+String(" C   "));
        Serial.println(String("Temperature: ")+String(f)+String(" F   "));
*/
        
        tft.setTextSize(2);
        tft.drawString(String("Humidity: ")+String(h)+String(" %   "), 50, 120);
        tft.drawString(String("Temperature: ")+String(c)+String(" C   "), 50, 150);
        tft.drawString(String("Temperature: ")+String(f)+String(" F   "), 50, 180);
  
  timer_DH11 = millis();
    }
}

