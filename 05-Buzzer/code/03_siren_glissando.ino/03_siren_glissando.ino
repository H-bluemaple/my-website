const int buzzer = 9;//定义引脚为9号引脚

void setup() {
  //本实验无需手动 pinMode；tone()会用定时器在该引脚输出方波输出
}

void loop() {
  //使用for循坏实现频率递增（升调滑音）和递减（降调滑音）
  for (int f = 600; f <= 1400;f += 10)
  {
    tone(buzzer,f);
    delay(10);
    }

  for (int f = 1400; f >= 600; f -= 10)
  {
    tone(buzzer,f);
    delay(10);
    }

   //末尾加一点停顿
   noTone(buzzer);
   delay(50);

}
