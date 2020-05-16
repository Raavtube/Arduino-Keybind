
/*
-------------Setup-------------
A - J are push buttons with an IN and OUT
WIRING!!!
EMAIL me at info@raavcorp.com if you have any questions.
Parentheses mean it is connected on the breadboard.
11 - (A - GND) - GND
10 - (B - GND) - GND
9 - (C - GND) - GND
8 - (D - GND) - GND
7 - (E - GND) - GND
6 - (F - GND) - GND
5 - (G - GND) - GND
4 - (H - GND) - GND
3 - (I - GND) - GND
2 - (J - GND) - GND

How it works:

It turns pins 2 - 11 on.
If the button or key is pushed the digitalRead will get an input back.
If the input recived is the correct input it will print to serial the button that is pressed then press the certain keybinds assigned to that key.

KEY ASSIGNMENTS:
A - RSHIFT + F5
B - RSHIFT + F6
C - RSHIFT + F7
D - RSHIFT + F8
E - RSHIFT + F9
F - RSHIFT + F10
G - RSHIFT + F11
H - RSHIFT + F12
I - RCTRL + RSHIFT + F5
J - RCTRL + RSHIFT + F6

It will press each key for 100 miliseconds or for a 10th of a second.



*/
#include "Keyboard.h"
const int A = 11;
const int B = 10;
const int C = 7;
const int D = 8;
const int E = 9;
const int F = 6;
const int G = 5;
const int H = 3;
const int I = 4;
const int J = 2;
int ASTATE;
int BSTATE;
int CSTATE;
int DSTATE;
int ESTATE;
int FSTATE;
int GSTATE;
int HSTATE;
int ISTATE;
int JSTATE;
const int LED = 13;// pin for input  - note: no semicolon after #define
int stateA, stateB;             // variables to store pin states
int sw1, sw2;                   // variables to represent switch states 
char ctrl = KEY_RIGHT_CTRL;
char shift = KEY_RIGHT_SHIFT;
char f5 = KEY_F5;
char f6 = KEY_F6;
char f7 = KEY_F7;
char f8 = KEY_F8;
char f9 = KEY_F9;
char f10 = KEY_F10;
char f11 = KEY_F11;
char f12 = KEY_F12;




void setup() {
  pinMode(A, INPUT);
  pinMode(B, INPUT);
  pinMode(C, INPUT);
  pinMode(D, INPUT);
  pinMode(E, INPUT);
  pinMode(F, INPUT);
  pinMode(G, INPUT);
  pinMode(H, INPUT);
  pinMode(I, INPUT);
  pinMode(J, INPUT);

}

void loop() {
  // This gets the state of each button.
  ASTATE = buttonPressed(A);
  if (ASTATE == 1 ){
    Keyboard.press(shift);
    Keyboard.press(f5);
    Serial.print("A IS PRESSED");
    Serial.print("\n");
    delay(500);
    Keyboard.releaseAll();
  }
  
  BSTATE = buttonPressed(B);
  if (BSTATE == 1 ){
    Keyboard.press(shift);
    Keyboard.press(f6);
    Serial.print("B IS PRESSED");
    Serial.print("\n");
    delay(500);
    Keyboard.releaseAll();
  }
  
  CSTATE = buttonPressed(C);
  if (CSTATE == 1 ){
    Keyboard.press(shift);
    Keyboard.press(f7);
    Serial.print("C IS PRESSED");
    Serial.print("\n");
    delay(500);
    Keyboard.releaseAll();
  }
  
  DSTATE = buttonPressed(D);
  if (DSTATE == 1 ){
    Keyboard.press(shift);
    Keyboard.press(f8);
    Serial.print("D IS PRESSED");
    Serial.print("\n");
    delay(500);
    Keyboard.releaseAll();
  }
  
  ESTATE = buttonPressed(E);
  if (ESTATE == 1 ){
    Keyboard.press(shift);
    Keyboard.press(f9);
    Serial.print("E IS PRESSED");
    Serial.print("\n");
    delay(500);
    Keyboard.releaseAll();
  }
  
  FSTATE = buttonPressed(F);
  if (FSTATE == 1 ){
    Keyboard.press(shift);
    Keyboard.press(f10);
    Serial.print("F IS PRESSED");
    Serial.print("\n");
    delay(500);
    Keyboard.releaseAll();
  }
  
  GSTATE = buttonPressed(G);
  if (GSTATE == 1 ){
    Keyboard.press(shift);
    Keyboard.press(f11);
    Serial.print("G IS PRESSED");
    Serial.print("\n");
    delay(500);
    Keyboard.releaseAll();
  }
  
  HSTATE = buttonPressed(H);
  if (HSTATE == 1 ){
    Keyboard.press(shift);
    Keyboard.press(f12);
    Serial.print("H IS PRESSED");
    Serial.print("\n");
    delay(500);
    Keyboard.releaseAll();
  }
  
  ISTATE = buttonPressed(I);
  if (ISTATE == 1 ){
    Keyboard.press(ctrl);
    Keyboard.press(shift);
    Keyboard.press(f5);
    Serial.print("I IS PRESSED");
    Serial.print("\n");
    delay(500);
    Keyboard.releaseAll();
  }
  
  JSTATE = buttonPressed(J);
  if (JSTATE == 1 ){
    Keyboard.press(shift);
    Keyboard.press(f6);
    Serial.print("J IS PRESSED");
    Serial.print("\n");
    delay(500);
    Keyboard.releaseAll();
  }
  
  
}
// 1 Means the Button is pressed and 0 means the button is unpressed.
int buttonPressed(int pin){
  char STATE;
  digitalWrite(pin, HIGH);
  STATE = digitalRead(pin);
  if ( STATE == 1 ){
    STATE = 0;
  }else{
    STATE = 1;
  }
  return STATE;
}
