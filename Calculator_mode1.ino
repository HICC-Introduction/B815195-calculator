#include <Keypad.h>

const byte ROWS = 4;   
const byte COLS = 4;   
char hexaKeys[ROWS][COLS] = {  
  {'1', '2', '3', 'A'},  
  {'4', '5', '6', 'B'},  
  {'7', '8', '9', 'C'},  
  {'*', '0', '#', 'D'}};  
byte rowPins[ROWS] = {9, 8, 7, 6}; // 키패드 회선 가로 핀배정
byte colPins[COLS] = {13, 12, 11, 10};  // 키패드 회선 세로 핀배정
Keypad Calculatorkeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);   
char Numberpressed;  // 키패드 기본설정 = 6~13핀 사용

int pin[] = {0, 1, 2, 3, 4, 5, 14, 15, 16, 17, 18, 19} // 4d 7seg 핀 지정


void setup() {
  // put your setup code here, to run once:

  for(int i=0; i<6; i++){
    pinMode(pin[i], OUTPUT);
  }
    for(int i=14; i<20; i++){
    pinMode(pin[i], OUTPUT);
  } // 7seg 출력모드로 지정


  
}

void loop() {
  // put your main code here, to run repeatedly:

}
