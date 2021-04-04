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
// 키패드 기본 설정



int positionpin[] = {0,1,2,3}; // 4자리 결정
int segment_pin[] = {4,5,14,15,16,17,18,19}; // 4dig 7seg 핀 상수 지정
byte data[] = {0xFC, 0x60, 0xDA, 0xF2, 0x66, 0xB6, 0xBE, 0xE4, 0xFE, 0xE6}; // 0-9 seg값
int Watingtime = 5;


void setup() {
  // put your setup code here, to run once:

  for(int i=0; i<3; i++){
    pinMode(positionpin[i], OUTPUT);
  }
    for(int i=4; i<5; i++){
    pinMode(segment_pin[i], OUTPUT);
  }
    for(int i=14; i<20; i++){
    pinMode(segment_pin[i], OUTPUT);
  } 
  
  /* 7seg 제어핀 OUTPUT 설정, 아두이노 핀을 직접 연결하는게
  쉬프트 레지스터의 고장으로 여러 핀 동시에 결선이 어려워짐
  4digit 1개만 결선으로 1단계로 낮추었는데도 핀의 개수가 부족해서
  코드가 복잡해졌다.
  */

}


int RESULT = 0; // 결과값 출력 구현 변수
int DEL = 0; // 화면 출력 초기화 구현 변수

char Control = kepad.getKey(); // 키패드로 입력한 문자(숫자/문자 포함)을 문자 변수로 받음



void loop() {
  // put your main code here, to run repeatedly:

if(Control == A){ // A버튼 "덧셈" 구현
  if(
  
}
}
