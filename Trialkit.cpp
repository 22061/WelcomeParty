#include "Trialkit.h"

namespace Trialkit
{
  void Car::setup()
  {
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
  }

  void Car::right_wheel(String state)
  {
    if(state.equalsIgnoreCase("ON"))
    {
      digitalWrite(2, HIGH);
    }
    else
    {
      digitalWrite(2, LOW);
    }
  }

  void Car::left_wheel(String state)
  {
    if(state.equalsIgnoreCase("ON"))
    {
      digitalWrite(3, HIGH);
    }
    else
    {
      digitalWrite(3, LOW);
    }
  }
}