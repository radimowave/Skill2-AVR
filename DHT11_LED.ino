#include "DHT.h"

#define DHTPIN 10   // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11   // DHT 11
//#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321

#define LED1 3
#define LED2 5

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println(F("DHT11 test! "));

  dht.begin();

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  // Wait a few seconds between measurements.
  delay(5000); //delay อาจจะมีปัญหาในการอ่าน

  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();
 

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t) ) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(F("    Temperature: ")); 
  Serial.println(t);
  
  if(t>= 26){ //ถ้า temp มากกว่าหรือเท่ากับ 26 LED 1 ติด LED 2 ดับ
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    delay(500);
    
  }else  digitalWrite(LED2, HIGH);
 
}
