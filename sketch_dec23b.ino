#include <Adafruit_NeoPixel.h>
#define trigPin 13                   // trigPin을 13으로 설정합니다.
#define echoPin 12                // echoPin을 12로 설정합니다.
#define PIN 7
#define NUM_LEDS 4

#define strip.setPixelColor(0, 0, 0, 0) 1

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);
void setup() {
  pinMode(trigPin, OUTPUT);   // trigPin 핀을 출력핀으로 설정합니다.
  pinMode(echoPin, INPUT);    // echoPin 핀을 입력핀으로 설정합니다.
  strip.begin();
  strip.show();
}
void loop() {
  long duration, distance;                   // 각 변수를 선언합니다.
  digitalWrite(trigPin, LOW);                 // trigPin에 LOW를 출력하고
  delayMicroseconds(2);                    // 2 마이크로초가 지나면
  digitalWrite(trigPin, HIGH);                // trigPin에 HIGH를 출력합니다.
  delayMicroseconds(10);                  // trigPin을 10마이크로초 동안 기다렸다가
  digitalWrite(trigPin, LOW);                // trigPin에 LOW를 출력합니다.
  duration = pulseIn(echoPin, HIGH);   // echoPin핀에서 펄스값을 받아옵니다.

if (distance >= 50 || distance <= 0) //50보다 안되면
{
strip.setPixelColor(0, 0, 0, 0);
strip.setPixelColor(1, 0, 0, 0);
strip.setPixelColor(2, 0, 0, 0);
strip.setPixelColor(3, 0, 0, 0);
}
else
{
//이 부분입니다
}
