#include "Trialkit.h"

Trialkit::Car car;

void setup()
{
  car.setup();
}

void loop()
{
  car.right_wheel("ON");
  car.left_wheel("ON");
  
  delay(1000);

  car.right_wheel("OFF");
  car.left_wheel("OFF");

  delay(1000);
}
