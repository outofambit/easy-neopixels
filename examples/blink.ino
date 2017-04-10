/*
Blink a single Neopixel!
*/

#include <EasyNeopixels.h>

void setup() {
    setupEasyNeoPixels(13, 1);
}

void loop() {
    writeEasyNeoPixel(0, HIGH);
    delay(500);
    writeEasyNeoPixel(0, LOW);
    delay(500);
}
