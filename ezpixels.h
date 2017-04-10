#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel neopixels;

void setupNeopixels(int pin, int num) {
  neopixels = Adafruit_NeoPixel(num, pin, NEO_GRB + NEO_KHZ800);
}

void writeNeopixel(int num, int val) {
  neopixels.setPixelColor(num, neopixels.Color(val*255,val*255,val*255));
  neopixels.show();
}

void writeNeopixel(int num, int r, int g, int b) {
  neopixels.setPixelColor(num, neopixels.Color(r,g,b));
  neopixels.show();
}
