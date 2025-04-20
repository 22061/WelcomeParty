#ifndef TRIALKIT_HPP_
#define TRIALKIT_HPP_

#include <Arduino.h>

namespace Trialkit
{
  class Car
  {
    public:
    void setup();

    void right_wheel(String state);
    void left_wheel(String state);
  };
}

#endif