
/*
  EasyNeoPixels.h - Library for making neopixels more approachable.
  Created by Evelyn Masso, April 9, 2017.
*/

#pragma once

#include "Arduino.h"
#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel easyNeoPixels;

void setupEasyNeoPixels(int pin, int num) {
  easyNeoPixels = Adafruit_NeoPixel(num, pin, NEO_GRB + NEO_KHZ800);
}

void writeEasyNeoPixel(int num, int val) {
  easyNeoPixels.setPixelColor(num, neopixels.Color(val*255,val*255,val*255));
  easyNeoPixels.show();
}

void writeEasyNeoPixel(int num, int r, int g, int b) {
  easyNeoPixels.setPixelColor(num, neopixels.Color(r,g,b));
  easyNeoPixels.show();
}
