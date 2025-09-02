#include <iostream>
#include <stdio.h>

int main() {
	int count = 3;
	for (int i = 0; i < 5; i+=2) {		
		for (int j = 0; j < count; j++) {
			printf(" ");
		}

		for (int j = 0; j <= i; j++) {		
			printf("*");
		}
		printf("\n");
		count--;
	}

	//printf("□□□□□□□□\n");
	//printf("□  □    □  □\n");
	//printf("□     □     □\n");
	//printf("□□□□□□□□\n");

	//int number1, number2, temp;
	//std::cin >> number1;
	//std::cin >> number2;

	//temp = number1;
	//number1 = number2;
	//number2 = temp;

	//printf("%d %d", number1, number2);

	//int width, height;
	//printf("사각형의 가로 : ");
	//std::cin >> width;
	// printf("사각형의 세로 : ");
	//std::cin >> height;


	//printf("사각형의 넓이는 : %d", width * height);

	//int number1, number2, devide, mod;
	//std::cin >> number1;
	//std::cin >> number2;

	//devide = number1 / number2;
	//mod = number1 - (devide * number2);

	//printf("나머지 : %d", mod);

	//int time, hour, min, sec;

	//std::cin >> time;

	//hour = time / 3600;
	//time -= hour * 3600;
	//min = time / 60;
	//time -= min * 60;
	//sec = time;

	//printf("총 시간은 : %d시 %d분 %d초 입니다.", hour, min, sec);

	//동전 개수 계산하기
	//금액을 입력받아 500원, 100원, 50원, 10원 동전이 각각 몇 개 필요한지 계산하는 프로그램.
	//금액이 큰 동전을 최대한 많이 받아야 한다.

	//int Money, mon500, mon100, mon50, mon10;

	//std::cin >> Money;

	//mon500 = Money / 500;
	//Money -= ((Money / 500) * 500);
	//mon100 = Money / 100;
	//Money -= ((Money / 100) * 100);
	//mon50 = Money / 50;
	//Money -= ((Money / 50) * 50);
	//mon10 = Money / 10;

	//printf("필요한 동전\n 500원 : %d개\n100원 : %d개\n50원 : %d개\n10원 : %d개\n", mon500, mon100, mon50, mon10);

	/*
	자리수 분리하기(입력은 항상 세자리라고 가정)
	수를 입력받고 100의 자리, 10의 자리, 1의 자리를 각각 출력하기
	각 자리의 수를 합해서 출력하기
	*/

	int Number, num100, num10, num1;
	std::cin >> Number;

	num100 = Number / 100;
	Number -= num100 * 100;
	num10 = Number / 10;
	Number -= num10 * 10;
	num1 = Number;

	printf("100의 자리 : %d\n10의 자리 : %d\n1의 자리 : %d\n", num100, num10, num1);

	return 0;
}