#include <Arduino.h>

int ledPin[4] = {7, 8, 12, 13};
void blinkTogether(int ledPin[], int speed);
void allLightsOn(int ledPin[]);
void allLightsOff(int ledPin[]);

void setup() {
  for (size_t i = 0; i < 4; i++)
  {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop() {
  blinkTogether(ledPin, 1000);
}

void blinkTogether(int ledPin[], int speed) {
  allLightsOn(ledPin);
  delay(speed);
  allLightsOff(ledPin);
  delay(speed);
}

void allLightsOn(int ledPin[]) {
  for (size_t i = 0; i < 4; i++)
  {
    digitalWrite(ledPin[i], HIGH);
  }
}

void allLightsOff(int ledPin[]) {
  for (size_t i = 0; i < 4; i++)
  {
    digitalWrite(ledPin[i], LOW);
  }
}