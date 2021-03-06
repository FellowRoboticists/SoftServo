// SoftServo Arduino library
//
// Copyright (c) 2013 Dave Sieh
// See LICENSE.txt for details.

#ifndef _SoftServo_h_
#define _SoftServo_h_

/**
   This class provides servo control without using an on-board timer.
 */
class SoftServo {
 public:

  /**
     Construct a new servo conntect to the specified pin.
   */
  SoftServo(int servoPin);

  /**
     Prepare the servo for use.
   */
  void begin();

  /**
     Orient the servo to the specified angle and wait at least
     the specified delay in milliseconds.
   */
  void write(int angle, long servoDelay);

 private:

  /**
     The servo pin.
   */
  int pin;
};

#endif
