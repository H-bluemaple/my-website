void setup() {
    pinMode(3,OUTPUT);
    pinMode(2,OUTPUT);
    pinMode(4,OUTPUT);
    // 设置 2,3,4 号引脚为输出模式
}

void loop() {
    digitalWrite(3,1);  // 黄灯亮1秒，熄灭1秒
    digitalWrite(2,0);
    digitalWrite(4,0);
    delay(1000);
    digitalWrite(3,0);
    delay(1000);
    
    digitalWrite(3,0);
    
    digitalWrite(2,1);  //  蓝灯亮0.5s，熄灭0.5s，执行两次
    delay(500); 
    digitalWrite(2,0);
    delay(500);
    digitalWrite(2,1);
    delay(500);
    digitalWrite(2,0);
    delay(500);

    digitalWrite(4,1);
    delay(250);
    digitalWrite(4,0);
    delay(250);
    digitalWrite(4,1);
    delay(250);
    digitalWrite(4,0);
    delay(250);
    digitalWrite(4,1);
    delay(250);         //  红灯亮0.25s，熄灭0.25s（最后一次熄灭0.5s），三次
    digitalWrite(4,0);
    delay(500);
    
}
