#include "DHT.h"

#define DHTPIN 5
#define DHTTYPE DHT11
#define RED_LED D2 //Led Merah
#define GREEN_LED D4 //Led Hijau
#define BLUE_LED D5 //Led Biru

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  // atur pin-pin digital sebagai output
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  Serial.println("Simulasi pembacaan Suhu dan Kelembapan udara di tengah kota");
  dht.begin();
}

void loop() {
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);

  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  if (t < 29.50) {
    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(BLUE_LED, HIGH);
    Serial.print(F("Kelembapan udara: "));
    Serial.print(h);
    Serial.print(F("% Suhu: "));
    Serial.print(t);
    Serial.print(F("°C "));
    Serial.print(f);
    Serial.println(F("°F "));
    Serial.println("Udara saat ini sedang dingin");
    Serial.println("Lampu LED Hijau menyala");
  } else if (t <= 29.80) {
    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(BLUE_LED, LOW);
    Serial.print(F("Kelembapan udara: "));
    Serial.print(h);
    Serial.print(F("% Suhu: "));
    Serial.print(t);
    Serial.print(F("°C "));
    Serial.print(f);
    Serial.println(F("°F "));
    Serial.println("Udara saat ini sedang normal");
    Serial.println("Lampu LED Biru menyala");
  } else if (t > 30) {
    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(BLUE_LED, HIGH);
    Serial.print(F("Kelembapan udara: "));
    Serial.print(h);
    Serial.print(F("% Suhu: "));
    Serial.print(t);
    Serial.print(F("°C "));
    Serial.print(f);
    Serial.println(F("°F "));
    Serial.println("Udara saat ini sedang panas");
    Serial.println("Lampu LED Merah menyala");
  }
}
