#include <Adafruit_Circuit_Playground.h>

void setup() {
  CircuitPlayground.begin();
}

void loop() {
  CircuitPlayground.clearPixels();
  delay(1000);
  CircuitPlayground.setPixelColor(0, 255,   0,   0);
  CircuitPlayground.setPixelColor(1, 128, 128,   0);
  CircuitPlayground.setPixelColor(2,   0, 255,   0);
  CircuitPlayground.setPixelColor(3,   0, 128, 128);
  CircuitPlayground.setPixelColor(4,   0,   0, 255);
  CircuitPlayground.setPixelColor(5, 255,   0,   0);
  CircuitPlayground.setPixelColor(6, 128, 128,   0);
  CircuitPlayground.setPixelColor(7,   0, 255,   0);
  CircuitPlayground.setPixelColor(8,   0, 128, 128);
  CircuitPlayground.setPixelColor(9,   0,   0, 255);
  delay(1000);
}
