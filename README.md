# Hardware - Calculator

## 목표 및 목적
아두이노 UNO를 통한 계산기 제작

### 문제 분석

  
* 최종 목적 : 계산기를 구현하도록 한다.
    * 상위 목적 : 하드웨어 연결을 통해 계산기를 물리적으로 구성한다.
        * 하위 목적 : 멤브레인 키보드와 아두이노 결선
        * 하위 목적 : 아두이노와 7seg 결선
        * 하위 목적 : DC to USB를 통해 외부 전원 입력
    * 상위 목적 : 소프트웨어 구현을 통해 계산기 내부 로직을 구현한다.
        * 하위 목적 : 멤브레인 키보드에서의 입력이 아두이노를 통해 처리되도록
        * 하위 목적 : 멤브레인 키보드의 입력이 7seg로 완전히 출력되도록
        * 하위 목적 : 아두이노에서 입력 값을 바탕으로 계산이 이뤄지도록
        * 하위 목적 : 결과가 출력될 때, 7seg를 통해서 각 비트가 정확히 결과를 나타낼 수 있도록
        * 하위 목적 : leading zero 표기가 되도록

## 개발 사양

### 하드웨어 - 개발
* CPU :Intel(R) Core(TM) i7-8550U CPU @ 1.80GHz, 1992Mhz, 4 코어, 8 논리 프로세서 
* RAM : 8GB
* HDD/SSD : SSD 256G 
* GPU : 인텔 HD Graphics 4400

### 하드웨어 - 부품
|인덱스|역할|모델명|가격|상세|링크|
|---|---|---|---|---|---|
|1|   |   |원|   |   |
|2|   |   |원|   |   |
|3|   |   |원|   |   |
|총합|   |   |원|   |   |

### 소프트웨어
* OS : [Microsoft Windows 10 Pro 10.0.18363 build 18363]
* 개발 스택 : Arduino Uno
* 개발 프로그램 : Arduino
* 개발 언어 : [C/C++]

### 코드룰
* 예시 프로그램

```
    # 변수명
    test_variable = 13

    # 클래스명
    class TestClass:
        def __init__(self):
            # 프로퍼티명
            self.testProperty = 41

        # 메소드명
        def TestMethod(self):
            print(self.testProperty)
    
    if __name__ == "__main__":
        test_variable = TestClass(43)
        test_variable.TestMethod()
```

* 본인의 코드 룰 

[위의 코드를 본인의 스타일로 직접 짜보세요]
