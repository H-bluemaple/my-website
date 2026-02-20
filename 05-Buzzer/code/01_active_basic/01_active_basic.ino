// 有源蜂鸣器基础发声实验

// 定义蜂鸣器连接的引脚
const int buzzer = 9;

void setup() {
  pinMode(buzzer, OUTPUT);             // 将引脚设置为输出模式
 }                                     // 默认情况下Arduino引脚是INPUT模式
                                       // 如果不设置为OUTPUT，digitalWrite(HIGH)
                                       // 只是打开内部上拉电阻，而不是输出5V
void loop() {
  digitalWrite(buzzer, HIGH);           // 输出高电平（5V）
                                        // 有源蜂鸣器内部自带振荡电路
                                        // 只要供电就会持续发声
  delay(200);  // 响200毫秒
  
  digitalWrite(buzzer, LOW);           // 输出低电平（0V）
                                       // 切断供电，停止发声
  delay(200);  // 停200毫秒
}
