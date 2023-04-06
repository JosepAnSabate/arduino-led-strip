#include <FastLED.h>

#define NUM_LEDS 60
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
  leds[0] = CRGB::Red;
  leds[1] = CRGB::Green;
  leds[2] = CRGB::Blue;
  FastLED.show();
}
