#include <Arduino.h>

int ledPin[4] = {7, 8, 12, 13};
void setBulbsToOutput(int ledPin[]);
void blinkTogether(int ledPin[], int speed);
void allLightsOn(int ledPin[]);
void allLightsOff(int ledPin[]);
void selectOneBulb(int ledPin[], int bulbNumber);
void lightsLeftToRight(int ledPin[], int speed);
void lightsRightToLeft(int ledPin[], int speed);

void setup() {
  setBulbsToOutput(ledPin);
}

void loop() {
  for (int i = 0; i < 6; i++)
  {
    blinkTogether(ledPin, 300);
  }

  for (int i = 0; i < 6; i++)
  {
    lightsLeftToRight(ledPin, 100);
    lightsRightToLeft(ledPin, 100);
  }
}

void setBulbsToOutput(int ledPin[]) {
  for (int i = 0; i < 4; i++)
  {
    pinMode(ledPin[i], OUTPUT);
  }
}

void blinkTogether(int ledPin[], int speed) {
  allLightsOn(ledPin);
  delay(speed);
  allLightsOff(ledPin);
  delay(speed);
}

void allLightsOn(int ledPin[]) {
  for (int i = 0; i < 4; i++)
  {
    digitalWrite(ledPin[i], HIGH);
  }
}

void allLightsOff(int ledPin[]) {
  for (int i = 0; i < 4; i++)
  {
    digitalWrite(ledPin[i], LOW);
  }
}

void lightsLeftToRight(int ledPin[], int speed) {
  for (int i = 0; i < 4; i++) {
    selectOneBulb(ledPin, i);
    delay(speed);
  }
  allLightsOff(ledPin);
  delay(speed);
}

void lightsRightToLeft(int ledPin[], int speed) {
  for (int i = 4; i >= 0; i--)
  {
    selectOneBulb(ledPin, i);
    delay(speed);
  }
  allLightsOff(ledPin);
  delay(speed);
}

void selectOneBulb(int ledPin[], int bulbNumber) {
  for (int i = 0; i < 4; i++) {
    if (i == bulbNumber) {
      digitalWrite(ledPin[i], HIGH);
    } else {
      digitalWrite(ledPin[i], LOW);
    }
  }
}

  