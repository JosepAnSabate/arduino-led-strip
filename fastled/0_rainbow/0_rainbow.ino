#include <FastLED.h>

#define NUM_LEDS 255
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
  
  fill_rainbow(leds, NUM_LEDS, 0,255/ NUM_LEDS);
  FastLED.show();


  

 
}
