// SoftServo Arduino library
//
// Copyright (c) 2013 Dave Sieh
// See LICENSE.txt for details.

#include <Arduino.h>
#include "SoftServo.h"

SoftServo::SoftServo(int servoPin) {
  pin = servoPin;
}

void SoftServo::begin() {
  pinMode(pin, OUTPUT);
}

void SoftServo::write(int angle, long servoDelay) {
  int pulsewidth = map(angle, 0, 180, 544, 2400); // width in microseconds

  do {
    digitalWrite(pin, HIGH);
    delayMicroseconds(pulsewidth);
    digitalWrite(pin, LOW);
    delay(20); // wait for 20 milliseconds
    servoDelay -= 20; 
  } while (servoDelay >= 0);
}
