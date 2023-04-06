#include <FastLED.h>
#include <stdint.h>

#define NUM_LEDS 250
#define LED_PIN 6 

// led array
CRGB leds[NUM_LEDS];
// leds[0] first led


void setup() {
  // GRB = color order
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(50);
  Serial.begin(9600);
}

void loop() {
  uint8_t octaves = 1;//Bbrightness
  uint16_t x = 0;//Bbrightness
  int scale = 100;//Bbrightness
  uint8_t hue_octaves =1; //hue color hsv
  uint16_t hue_x = 1;//hue color hsv
  int hue_scale = 50;//hue color hsv
  uint16_t ntime = millis()/3; //Time param for brightness and hue
  uint8_t hue_shift = 5;

  fill_noise16 (leds, NUM_LEDS,octaves,x,scale, hue_octaves, hue_x, hue_scale, ntime, hue_shift);
  FastLED.show();
}
