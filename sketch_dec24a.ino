#include <Adafruit_NeoPixel.h>
#define trigPin 13                   // trigPin을 13으로 설정합니다.
#define echoPin 12                // echoPin을 12로 설정합니다.
#define PIN 7
#define NUM_LEDS 4

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

  if (distance >= 20 || distance <= 0) //50보다 안되면
  {
    strip.setPixelColor(0, 0, 0, 0);
    strip.setPixelColor(1, 0, 0, 0);
    strip.setPixelColor(2, 0, 0, 0);
    strip.setPixelColor(3, 0, 0, 0);
  }
  else
  {
    RGBW_Random(0,random(1,3));
  }
  strip.show();
  delay(10);
}

void RGBW_Random(int pixel, int Random){
  switch(Random){
    case 1: strip.setPixelColor(1, 255, 0, 0);
      strip.show();
  delay(1000);
      break;
    case 2: strip.setPixelColor(1, 0, 255, 0);
      strip.show();
  delay(1000);
      break;
    case 3: strip.setPixelColor(1, 0, 0, 255);
      strip.show();
  delay(1000);
      break;
  }
}
