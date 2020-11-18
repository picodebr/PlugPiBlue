#include "PlugPiBlue.h"

PlugPiBlue::PlugPiBlue() {}

void PlugPiBlue::setup() {
  pinMode(_greenLedPin, OUTPUT);
  pinMode(_redLedPin, OUTPUT);
  pinMode(_yellowLedPin, OUTPUT);
  pinMode(_potentiometerPin, INPUT);
}

void PlugPiBlue::redLedOn() { digitalWrite(_redLedPin, true); }

void PlugPiBlue::redLedOff() { digitalWrite(_redLedPin, false); }

void PlugPiBlue::redLedPercent(uint8_t percent) {
  analogWrite(_redLedPin, map(percent, 0, 100, 0, 255));
}

void PlugPiBlue::yellowLedOn() { digitalWrite(_yellowLedPin, true); }

void PlugPiBlue::yellowLedOff() { digitalWrite(_yellowLedPin, false); }

void PlugPiBlue::yellowLedPercent(uint8_t percent) {
  analogWrite(_yellowLedPin, map(percent, 0, 100, 0, 255));
}

void PlugPiBlue::greenLedOn() { digitalWrite(_greenLedPin, true); }

void PlugPiBlue::greenLedOff() { digitalWrite(_greenLedPin, false); }

void PlugPiBlue::greenLedPercent(uint8_t percent) {
  analogWrite(_greenLedPin, map(percent, 0, 100, 0, 255));
}