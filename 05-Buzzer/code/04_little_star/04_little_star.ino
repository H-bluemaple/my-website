const int buzzer = 9; //设置9号引脚

void beep(int freq,int ms)  //定义一个beep(频率,时长)函数，在音节后面加入短暂停顿
{
  tone(buzzer,freq);
  delay(ms);
  noTone(buzzer);
  delay(40);    //一个音节停顿40ms。没有停顿时，连续音会糊在一起，听起来像一个长音或只有少数音
  }

void setup() {
  // 这里不手动 pinMode：tone() 通常会自动配置该引脚为输出并产生方波
}

void loop() {
  //《小星星》第一句：CCGGAAG。对应频率：C(262)，G(392),A(440)
  beep(262,350);
  beep(262,350);
  beep(392,350);
  beep(392,350);
  beep(440,350);
  beep(440,350);
  beep(262,700);  //最后一个G是长音

  delay(300); //停顿

  //第二句：FFEEDDC。对应频率：F(349)，E(330)，D(294)，C(262)
  beep(349,350);
  beep(349,350);
  beep(330,350);
  beep(330,350);
  beep(294,350);
  beep(294,350);
  beep(262,700);  //最后一个C是长音

  delay(1000); //停一秒
}
