/*

Blink a single Neopixel!

(Don't forget to install [Adafruit_NeoPixel](https://github.com/adafruit/Adafruit_NeoPixel) to use EasyNeoPixels.)
*/

#include <EasyNeoPixels.h>

void setup() {
    setupEasyNeoPixels(13, 1);
}

void loop() {
    writeEasyNeoPixel(0, HIGH);
    delay(500);
    writeEasyNeoPixel(0, LOW);
    delay(500);
}
