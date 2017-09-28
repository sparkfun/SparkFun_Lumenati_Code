#include "FastLED.h"

//Number of LEDs
#define NUM_LEDS 20

//Define our clock and data lines
#define DATA_PIN 11
#define CLOCK_PIN 13

//Create the LED array
CRGB leds[NUM_LEDS];

void setup() { 

      //Tell FastLED what we're using. Note "BGR" where you might normally find "RGB".
      //This is just to rearrange the order to make all the colors work right.
      FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, BGR>(leds, NUM_LEDS);

      //Set global brightness
      FastLED.setBrightness(50);
}

void loop() { 

  uint8_t x;
  uint16_t wait = 100;

  //Check out all these wacky colors! Have a look at teh FastLED documentation for more.
  //Turn on each LED in succession
  leds[0] = CRGB::Blue;
  FastLED.show();
  delay(wait);
  
  leds[1] = CRGB::Green;
  FastLED.show();
  delay(wait);

  leds[2] = CRGB::Purple;
  FastLED.show();
  delay(wait);

  leds[3] = CRGB::AliceBlue;
  FastLED.show();
  delay(wait);

  leds[4] = CRGB::DarkGoldenrod;
  FastLED.show();
  delay(wait);

  leds[5] = CRGB::DarkGreen;
  FastLED.show();
  delay(wait);

  leds[6] = CRGB::DeepSkyBlue;
  FastLED.show();
  delay(wait);

  leds[7] = CRGB::GreenYellow;
  FastLED.show();
  delay(wait);

  leds[8] = CRGB::LawnGreen;
  FastLED.show();
  delay(wait);

  leds[9] = CRGB::Maroon;
  FastLED.show();
  delay(wait);

  leds[10] = CRGB::FairyLight;
  FastLED.show();
  delay(wait);

  leds[11] = CRGB::Tomato;
  FastLED.show();
  delay(wait);

  leds[12] = CRGB::Turquoise;
  FastLED.show();
  delay(wait);

  leds[13] = CRGB::SpringGreen;
  FastLED.show();
  delay(wait);

  leds[14] = CRGB::Salmon;
  FastLED.show();
  delay(wait);

  leds[15] = CRGB::Sienna;
  FastLED.show();
  delay(wait);

  leds[16] = CRGB::SeaGreen;
  FastLED.show();
  delay(wait);

  leds[17] = CRGB::Teal;
  FastLED.show();
  delay(wait);

  leds[18] = CRGB::OrangeRed;
  FastLED.show();
  delay(wait);

  leds[19] = CRGB::RosyBrown;
  FastLED.show();
  delay(wait);

  //Shut them off
  for (x = 0; x < NUM_LEDS; x++)
  {
    leds[x] = CRGB::Black;
  }

  FastLED.show();
  delay(wait);
  
}
