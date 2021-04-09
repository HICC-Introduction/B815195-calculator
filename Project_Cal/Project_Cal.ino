#include <Arduino.h>
#include <Keypad.h> // 멤브레인 키패드 동작을 위한 라이브러리 헤더파일 포함
#include <TM1637Display.h> // Arduino library for TM1637 (LED Driver) 7seg LED 동작을 위한 라이브러리 헤더 포함
#include <TM1637.h>


#define TEST_DELAY   2000 // 딜레이 시간 자율 설정

TM1637Display one(2,3); // 첫번째 오브젝트 생성하고 초기화 CLK = 2, DIO =3
TM1637Display two(4,5); // 두번째 오브젝트 생성하고 초기화 CLK = 4, DIO =5 


int answer; // 결과값 변수 미리 선언
int First = answer/10000; // 첫 네자리 설정
int Second = answer - (First*10000); // 다음 네자리 설정

int x;
int y; // 일단 두 입력 숫자가 최대 2개일때를 가정함 
//(예: 1234 + 2345 = ? O , 1234 + 2345 +5678 = ? X)


char PUSHnumber;
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

Keypad PUSHnumberKeypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS);
// 키패드 기본 설정


void setup() {
  // put your setup code here, to run once:
  
  one.clear();
  one.setBrightness(0x0f);
  two.clear();
  two.setBrightness(0x0f); // 두 디스플레이 밝기 설정
 

}




void loop() {
  // put your main code here, to run repeatedly:
  
 PUSHnumber = PUSHnumberKeypad.getKey(); // 키패드 입력
 void OPERATION(); // 항상 문자 눌릴 때 반응하도록
 
 

}


void PUSHINGNUMBER ( ){ // 숫자가 눌릴때 
  PUSHnumber = PUSHnumberKeypad.getKey();

  
  
}

void OPERATION (char PUSHnumber){
  
  switch(PUSHnumber){ // +를 눌렀을때, 계산이 되도록
    case 'A' :
    answer = x + y; 
    break;
    case 'B' :
    answer = x - y;
    break;
    case 'C' :
    answer = x * y;
    break;
    case 'D' :
    answer = x / y;
    break;}
    
  if(PUSHnumber == '#'){ // 등호를 눌렀을때 결과값이 출력되도록
    void SHOW_ANSWER(); // 출력함 - 경우 = 음수, 0, 양수 }
 }
}


void SHOW_ANSWER(int answer){ // 결과를 음수 0 양수로 나누어 출력하는 방식, [출력함수]
if(answer < 0){
    void SHOW_MINUS();
  } else if(answer == 0){
    two.setSegments(0); // 결과가 0이면 그냥 0만 출력함
  } else if (answer > 0){
    if(answer > 99999999){
    one.setSegments(0000);
    two.setSegments(0000); 
    } else void SHOW_4Digit() ; // 결과가 0이면 그냥 0만 출력함
  }

}



void SHOW_MINUS(uint8_t MINUS_answer){ // 음수일때 결과값을 출력하는 함수, (총 8자리 수는 출력할 수 없음)
  
  uint8_t fst = First/1000; // 첫번째 자리
  uint8_t snd = First/100; // 두번째 자리
  uint8_t trd = First/10 - (snd*10); // 세번째 자리
  uint8_t fth = First - (trd*10) - (snd*100); // 네번째 자리
  
   if (fst >0){
    one.setSegments(0000);
    two.setSegments(0000); // 8자리의 음수는 출력이 안되기 때문에 0000 0000 출력하도록 설정
   }

   else { // 8자리 안넘으면 출력 진행
    uint8_t fstSetting[] = {
      SEG_G, snd, trd, fth }; // - nnn 출력하도록 미리 설정한 첫번째 seg 설정
      
    one.setSegments(fstSetting); // 음수 부호 포함 나머지 출력
    two.setSegments(Second); // 끝자리는 그냥 출력
   }
   
}


void SHOW_Digit(int some){
  one.setSegments(First);// 첫번째 segment에 출력할 값
  two.setSegments(Second); // 두번째 segment에 출력할 값
  delay(TEST_DELAY);

  delay(1000);

}
