#include <FastLED.h>

#define NUM_LEDS 65
#define LED_PIN 6 

// led array
CRGB leds[NUM_LEDS];
// leds[0] first led


void setup() {
  // GRB = color order
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(50);

}

void loop() {
  fill_solid(leds, NUM_LEDS, CRGB::Red);
  FastLED.show();
  delay(200);

  fill_solid(leds, NUM_LEDS, CRGB::Green);
  FastLED.show();
  delay(200);

  fill_solid(leds, NUM_LEDS, CRGB::Yellow);
  FastLED.show();
  delay(200);
}
