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
  for(int i=0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Red;
    FastLED.show();
    delay(200);
    leds[i] = CRGB::Black; // off
  }

  for(int i=NUM_LEDS-1; i >= 0; i--) {
    leds[i] = CRGB::Green;
    FastLED.show();
    delay(200);
    leds[i] = CRGB::Black; // off
  }

 
  
}
