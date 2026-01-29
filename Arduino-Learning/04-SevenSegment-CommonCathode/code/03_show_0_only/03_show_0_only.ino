/*
  One-digit 7-seg (Common Cathode) - Step 1: show "0"

  Wiring (your setup):
    a  -> D2(audrino的2引脚)
    b  -> D3
    c  -> D4
    d  -> D5
    e  -> D6
    f  -> D7
    g  -> D8
    dp -> D9
  Common pins (3,8) -> GND

  Rule (common cathode):
    digitalWrite(pin, HIGH) -> that segment lights
    digitalWrite(pin, LOW)  -> that segment off
*/

// step0(a):Give each segment a readable name (so code looks like "A" instead of "2")
const int A  = 2;
const int B  = 3;
const int C  = 4;
const int D  = 5;
const int E  = 6;
const int F  = 7;
const int G  = 8;
const int DP = 9;

// step0(b):Turn everything off first (good habit: avoid leftover light / messy state)
void allOff() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(DP, LOW);
}

//step1: Show digit "0":
// 0 needs segments: a b c d e f ON, g OFF
void show0() {
  allOff();               // start from a clean state
  digitalWrite(A, HIGH);  // top
  digitalWrite(B, HIGH);  // upper-right 右上竖
  digitalWrite(C, HIGH);  // lower-right 右下竖
  digitalWrite(D, HIGH);  // bottom 底横
  digitalWrite(E, HIGH);  // lower-left 左下竖
  digitalWrite(F, HIGH);  // upper-left 左上竖
  // G stays OFF for "0"
}

// step2:Show digit "1":
// 1 needs segments: b c ON, others OFF
void show1() {
  allOff();               // start from a clean state
  digitalWrite(B, HIGH);  // upper-right
  digitalWrite(C, HIGH);  // lower-right
}

// step3:Show digit "2"
//2 need segments: a b g d e
void show2() {
  allOff(); //clean start

  digitalWrite(A,HIGH);//上横
  digitalWrite(B,HIGH);//右上竖
  digitalWrite(G,HIGH);//中横
  digitalWrite(D,HIGH);//底横
  digitalWrite(E,HIGH);//左下竖
}

//step4：show "3"
//3 need segments on: a, b, g, c, d
void show3() {
  allOff();

  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  
}

//step5:show "4"
//4 need : b, c, f, g
void show4() {
  allOff();

  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
}

//step 6：show "5"
//5 need on: a, c, d, f, g
void show5() {
  allOff();

  digitalWrite(A,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
}

//step 7：show "6"
//6 need on: a, c, d, e, f, g
void show6() {
  allOff();

  digitalWrite(A,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
}

//step 8：show "7"
//7 need on: a, b, c
void show7() {
  allOff();

  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);

}

//step 9：show "8"
//8 need on: a, b, c, d, e, f, g
void show8() {
  allOff();

  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
}

//step 10：show "9"
//9 need on: a, b, c, d, f, g
void show9() {
  allOff();

  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
}

void setup() {
  // Set each used pin to OUTPUT so Arduino can drive the segment
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(DP, OUTPUT);

  allOff();   // safety: start with everything off
}

void loop() {
  show0();delay(1000);

  show1();delay(1000);

  show2();delay(1000);

  show3();delay(1000);

  show4();delay(1000);

  show5();delay(1000);

  show6();delay(1000);

  show7();delay(1000);

  show8();delay(1000);

  show9();delay(1000);
}
