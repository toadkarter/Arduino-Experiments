#include <Arduino.h>

int ledPin[4] = {7, 8, 12, 13};
void blinkTogether(int ledPin[], int speed);
void allLightsOn(int ledPin[], int speed);
void allLightsOff(int ledPin[], int speed);

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
  allLightsOn(ledPin, speed);
  allLightsOff(ledPin, speed);
}

void allLightsOn(int ledPin[], int speed) {
  for (size_t i = 0; i < 4; i++)
  {
    digitalWrite(ledPin[i], HIGH);
  }
  delay(speed);
}

void allLightsOff(int ledPin[], int speed) {
  for (size_t i = 0; i < 4; i++)
  {
    digitalWrite(ledPin[i], LOW);
  }
  delay(speed);

}