# Easy NeoPixels Library

Makes it easy to use Neopixels with just a few simple commands!

No knowledge of functions, objects, or variables required.

It's as easy as:

```c
setupEasyNeoPixels(13, 1);              // attached to pin 13, 1 neopixel long
writeEasyNeoPixel(0, HIGH);             // turn on the first neopixel
writeEasyNeoPixel(0, 255, 255, 0);      // make the first neopixel purple
```

## Examples

see `examples/` for a collection of arduino sketches that use this library

## A Note to Advanced Users

Please be aware this library pollutes the global namespace with a variable and a few functions. 😄
