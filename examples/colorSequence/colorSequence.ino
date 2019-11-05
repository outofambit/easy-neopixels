/*

Cycle through colors on a single Neopixel!

(Don't forget to install [Adafruit_NeoPixel](https://github.com/adafruit/Adafruit_NeoPixel) to use EasyNeoPixels.)
*/

#include <EasyNeoPixels.h>

void setup() {
    setupEasyNeoPixels(13, 1);
}

void loop() {
    // make it red
    writeEasyNeoPixel(0, 255, 0, 0);
    delay(500);
    // make it green
    writeEasyNeoPixel(0, 0, 255, 0);
    delay(500);
    // make it blue
    writeEasyNeoPixel(0, 0, 0, 255);
    delay(500);
}
