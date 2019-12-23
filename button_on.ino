#include <Adafruit_NeoPixel.h>
#define PIN 7
#define NUM_LEDS 4
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);
int buttonApin = 8;

void setup() 
{
  pinMode(buttonApin, INPUT_PULLUP); 
  strip.begin();
  strip.show();
}
 
void loop() 
{
  if (digitalRead(buttonApin) == LOW)
  {
    strip.setPixelColor(0, 10, 0, 0);
    strip.setPixelColor(1, 0, 0, 0);
    strip.setPixelColor(2, 0, 0, 0);
    strip.setPixelColor(3, 0, 0, 0);
    strip.show();
    delay(1);
  }
    if (digitalRead(buttonApin) == HIGH)
  {
    strip.setPixelColor(0, 0, 0, 0);
    strip.setPixelColor(1, 0, 0, 0);
    strip.setPixelColor(2, 0, 0, 0);
    strip.setPixelColor(3, 0, 0, 0);
    strip.show();
    delay(1);
  }

}
