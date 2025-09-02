// 소스 파일

/*

Ctrl + D : 한 줄 복사하기
Shift + Delete : 한 줄 삭제하기
Shift + 화살표 : 블럭 잡기
Alt + 화살표 : 블럭 바꾸기
Ctrl + 화살표 : 보이는 영역 위 아래
Alt + Shift + 화살표 : 세로로 블럭 잡기
Ctrl + Shift + B : 프로젝트 빌드
Ctrl + Space : 자동 완성 기능 (인텔리센스)

*/

/*

컴파일러 : 번역기(사람이 써 놓은 코드를 기계가 알아듣게 번역해줌)
빌드 : 실행파일 생성하기
리빌드 : 전체 다시 빌드하기(정리 + 빌드)

변수(Variable)
 - 변하는 숫자
 - 컴퓨터에 값

*/



#include <iostream> // 입출력 관련
#include <stdio.h>
#include <cstdio> // stdio.h에 네임 스페이스 추가한 래퍼
//#include "header.h"

int main() // 엔트리 포인트 (코드가 시작되는 곳)
{
    //printf("Hello World\n"); // C 출력 방법
    //printf("최태훈\t");
    //printf("00년생입니다.\n");

    //std::cout << "Hello World!\n"; // C++ 출력 방법

    /*

     이스케이프 시퀀스
     \n : 줄바꾸기 (개행문자)
     \t : 탭 넣기
     \" : 쌍따옴표 한개
     \\ : \찍기
     \r : 캐리지 리턴

     */

    
    int age;

    // C++ 에서는 정수형 변수에 소수를 넣어도 오류가 나지 않고 소수점 아래를 버린 후 정수형으로 인식한다.
    // 그래서 age의 값은 5
    age = 5.3;
    
    // scanf_s("%d", &number); // C 입력 방법

    //std::cin >> number; // C++ 입력 방법
    //printf("입력한 숫자는 : %d\n", number);

    /*printf("당신의 나이는 몇살인가요? ");
    std::cin >> age;
    printf("당신의 나이는 : %d", age);*/

    int number1 = 0;
    int number2 = 0;
    int number3;
    printf("숫자 1을 입력하시오 : ");
    std::cin >> number1;

    printf("숫자 2을 입력하시오 : ");
    std::cin >> number2;

    number3 = number1 + number2;

    printf("두 숫자의 합은 %d입니다.", number3);

    return 0;
}