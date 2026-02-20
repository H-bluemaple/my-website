// 有源蜂鸣器基础发声实验

const int buzzer = 9; //设置9号引脚
void setup() {
  //本实验无需手动 pinMode；tone()会用定时器在该引脚输出方波输出
  }

void loop() {
  //tone(引脚, 频率) 可输出指定频率的方波，从而改变音调。
  tone(buzzer,50); delay(1000);  //频率为50Hz，持续一秒
  tone(buzzer,500); delay(1000); //频率为500Hz，持续一秒
  tone(buzzer,2000); delay(1000);//频率为2000Hz，持续一秒
  tone(buzzer,4000); delay(1000);//频率为4000Hz，持续一秒
  noTone(buzzer); delay(1000);   //停止输出1秒
}
