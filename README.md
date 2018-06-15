# Easy NeoPixels Library

Makes it easy to use Neopixels with just a few easy commands!

No knowledge of functions, objects, or even variables required.

It's as easy as:

```c
setupEasyNeoPixels(13, 1);              // attached to pin 13, 1 neopixel long
writeEasyNeoPixel(0, HIGH);             // turn on the first neopixel
writeEasyNeoPixel(0, 255, 255, 0);      // make the first neopixel purple
```

## Dependencies

You must install [Adafruit_NeoPixel](https://github.com/adafruit/Adafruit_NeoPixel) to use this library!

## Examples

see `examples/` for a collection of arduino sketches that use this library

## Advanced Users

Advanced users probably don't want to use this library, but if you do: be aware the library *pollutes the global namespace* with a variable and a few functions.
