#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {10, 11, 12, 13};   // 가로줄 핀 배정
byte colPins[COLS] = {9, 8, 7, 6};   // 세로줄 핀 배정

Keypad Calculatorpad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );



void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
