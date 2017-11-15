#include <Adafruit_Circuit_Playground.h>

int maxValue = 10;
void setup() {
  CircuitPlayground.begin();
}

void loop() {
  int sensorReading = CircuitPlayground.lightSensor();
  int frequency = map(sensorReading, 0, maxValue, 500, 800);

  Serial.println(sensorReading);

  //CircuitPlayground.playTone(frequency, duration_ms)
  CircuitPlayground.playTone(frequency, 50);
}
