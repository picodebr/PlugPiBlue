#ifndef __PLUGPIBLUE_H__
#define __PLUGPIBLUE_H__

#include <Arduino.h>

class PlugPiBlue {
 public:
  PlugPiBlue();
  void setup(void);

  uint16_t getPotentiometerValue(void);

  void redLedOn();
  void redLedOff();
  void redLedPercent(uint8_t percent);
  void yellowLedOn();
  void yellowLedOff();
  void yellowLedPercent(uint8_t percent);
  void greenLedOn();
  void greenLedOff();
  void greenLedPercent(uint8_t percent);

 private:
  const uint8_t _greenLedPin = 9;
  const uint8_t _redLedPin = 5;
  const uint8_t _yellowLedPin = 10;
  const uint8_t _lm35Pin = 19;
  const uint8_t _potentiometerPin = 18;
};

#endif  // __PLUGPIBLUE_H__