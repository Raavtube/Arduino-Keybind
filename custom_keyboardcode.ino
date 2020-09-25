// Notes:
// A = CTRL + ALT + SHIFT + F7
// B = CTRL + ALT + SHIFT + F8
// C = CTRL + ALT + SHIFT + F9
// D = CTRL + ALT + SHIFT + F10
// E = CTRL + ALT + SHIFT + F11
// F = CTRL + ALT + SHIFT + F12
#include <Keyboard.h>
int pinA = 8;
int pinB = 9;
int pinC = 10;
int pinD = 11;
int pinE = 12;
int pinF = 13;
int readPinA = 0;
int readPinB = 0;
int readPinC = 0;
int readPinD = 0;
int readPinE = 0;
int readPinF = 0;



void setup() {
    pinMode(pinA, INPUT); 
    pinMode(pinB, INPUT); 
    pinMode(pinC, INPUT); 
    pinMode(pinD, INPUT); 
    pinMode(pinE, INPUT); 
    pinMode(pinF, INPUT); 

  // put your setup code here, to run once:

}

void loop() {
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, HIGH);
    digitalWrite(pinE, HIGH);
    digitalWrite(pinF, HIGH);
    readPinA = digitalRead(pinA);
    if (readPinA == 0){
    Serial.print("A\n");
    Keyboard.press(KEY_RIGHT_CTRL);
    delay(100);
    Keyboard.press(KEY_RIGHT_ALT);
    delay(100);
    Keyboard.press(KEY_RIGHT_SHIFT);
    delay(100);
    Keyboard.press(KEY_F7);
    delay(100);
    Keyboard.releaseAll();
    delay(250);
    }
    readPinB = digitalRead(pinB);
    if (readPinB == 0){
    Serial.print("B\n");
    Keyboard.press(KEY_RIGHT_CTRL);
    delay(100);
    Keyboard.press(KEY_RIGHT_ALT);
    delay(100);
    Keyboard.press(KEY_RIGHT_SHIFT);
    delay(100);
    Keyboard.press(KEY_F8);
    delay(100);
    Keyboard.releaseAll();
    delay(250);
    }
    readPinC = digitalRead(pinC);
    if (readPinC == 0){
    Serial.print("C\n");
    Keyboard.press(KEY_RIGHT_CTRL);
    delay(100);
    Keyboard.press(KEY_RIGHT_ALT);
    delay(100);
    Keyboard.press(KEY_RIGHT_SHIFT);
    delay(100);
    Keyboard.press(KEY_F9);
    delay(100);
    Keyboard.releaseAll();
    delay(250);
    }
    readPinD = digitalRead(pinD);
    if (readPinD == 0){
    Serial.print("D\n");
    Keyboard.press(KEY_RIGHT_CTRL);
    delay(100);
    Keyboard.press(KEY_RIGHT_ALT);
    delay(100);
    Keyboard.press(KEY_RIGHT_SHIFT);
    delay(100);
    Keyboard.press(KEY_F10);
    delay(100);
    Keyboard.releaseAll();
    delay(250);
    }
    readPinE = digitalRead(pinE);
    if (readPinE == 0){
    Serial.print("E\n");
    Keyboard.press(KEY_RIGHT_CTRL);
    delay(100);
    Keyboard.press(KEY_RIGHT_ALT);
    delay(100);
    Keyboard.press(KEY_RIGHT_SHIFT);
    delay(100);
    Keyboard.press(KEY_F11);
    delay(100);
    Keyboard.releaseAll();
    delay(250);
    }
    readPinF = digitalRead(pinF);
    if (readPinF == 0){
    Serial.print("F\n");
    Keyboard.press(KEY_RIGHT_CTRL);
    delay(100);
    Keyboard.press(KEY_RIGHT_ALT);
    delay(100);
    Keyboard.press(KEY_RIGHT_SHIFT);
    delay(100);
    Keyboard.press(KEY_F12);
    delay(100);
    Keyboard.releaseAll();
    delay(250);
    }

}
