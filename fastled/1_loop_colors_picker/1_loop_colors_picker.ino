#include <FastLED.h>

#define NUM_LEDS 295
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
  for(int i = 0; i < NUM_LEDS; i++) {
    leds[i]= CRGB(i*20, i+5, 7);
  }
  FastLED.show();
}
