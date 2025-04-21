#include "Trialkit.h"

Trialkit::Car car;

void setup()  //起動したときに一度だけ実行される
{
  car.setup();
}

void loop()  //最後まで終わるとまた最初から繰り返される
{
  car.right_wheel("ON");  //右のタイヤが動く
  car.left_wheel("ON");  //左のタイヤが動く
  
  delay(5000);  //その状態を5000ミリ秒(5秒)続ける

  car.right_wheel("OFF");  //右のタイヤが止まる
  car.left_wheel("OFF");  //左のタイヤが止まる

  delay(5000);  //その状態を5000ミリ秒(5秒)続ける
}