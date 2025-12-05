void setup() {
  // put your setup code here, to run once:这里写“准备做什么”
    Serial.begin(9600);//初始化串口通信，串口监视器波特率必须与此一致
}

void loop() {
  // put your main code here, to run repeatedly:这里写重复做什么
    Serial.println("Hello Arduino");//打印字符
    delay(1000);                    //delay函数控制重复频率，1000ms后打印一条新的字符//
    Serial.println("Do you want to play with me?");
    delay(2000);
}
