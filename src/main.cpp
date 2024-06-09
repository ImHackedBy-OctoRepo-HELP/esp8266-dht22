#include <Arduino.h>
#include <Adafruit_Sensor.h>
#include "DHT.h"

#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
#define DHT_PIN D8

DHT dht(DHT_PIN, DHTTYPE);

float temperature;
float humidity;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  temperature = dht.readTemperature();
  humidity = dht.readHumidity();
  Serial.println(temperature);
  Serial.println(humidity);
  Serial.println();
  delay(5000);
}