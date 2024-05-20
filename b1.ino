#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <MQ2.h>
#include <DHT.h>

#define DHTPIN 7
#define DHTTYPE DHT22
#define d1 2
#define d2 3
#define d3 4
#define d4 5
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
DHT dht(DHTPIN, DHTTYPE);


float hum, temp, lpg, co, smoke;
int pin = A0;

MQ2 mq2(pin);
String x, data;

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  pinMode(d1, OUTPUT);
  pinMode(d2, OUTPUT);
  pinMode(d3, OUTPUT);
  pinMode(d4, OUTPUT);
  digitalWrite(d1, HIGH );
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);
  Serial.begin(9600);
  mq2.begin();
  dht.begin();
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }
  display.clearDisplay();
  display.setTextColor(WHITE);
  display.display();


}

void loop() {


    airsensor();
    temp_hum();

}
