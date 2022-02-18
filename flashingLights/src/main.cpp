#include <Arduino.h>

int ledPin[4] = {7, 8, 12, 13};
void blinkTogether(int ledPin[]);
void allLightsOn(int ledPin[]);
void allLightsOff(int ledPin[]);

void setup() {
  for (size_t i = 0; i < 4; i++)
  {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop() {
  blinkTogether(ledPin);
}

void blinkTogether(int ledPin[]) {
  allLightsOn(ledPin);
  allLightsOff(ledPin);
}

void allLightsOn(int ledPin[]) {
  for (size_t i = 0; i < 4; i++)
  {
    digitalWrite(ledPin[i], HIGH);
  }
  delay(1000);
}

void allLightsOff(int ledPin[]) {
  for (size_t i = 0; i < 4; i++)
  {
    digitalWrite(ledPin[i], LOW);
  }
  delay(1000);

}