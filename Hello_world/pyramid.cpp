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

	//printf("���������\n");
	//printf("��  ��    ��  ��\n");
	//printf("��     ��     ��\n");
	//printf("���������\n");

	//int number1, number2, temp;
	//std::cin >> number1;
	//std::cin >> number2;

	//temp = number1;
	//number1 = number2;
	//number2 = temp;

	//printf("%d %d", number1, number2);

	//int width, height;
	//printf("�簢���� ���� : ");
	//std::cin >> width;
	// printf("�簢���� ���� : ");
	//std::cin >> height;


	//printf("�簢���� ���̴� : %d", width * height);

	//int number1, number2, devide, mod;
	//std::cin >> number1;
	//std::cin >> number2;

	//devide = number1 / number2;
	//mod = number1 - (devide * number2);

	//printf("������ : %d", mod);

	//int time, hour, min, sec;

	//std::cin >> time;

	//hour = time / 3600;
	//time -= hour * 3600;
	//min = time / 60;
	//time -= min * 60;
	//sec = time;

	//printf("�� �ð��� : %d�� %d�� %d�� �Դϴ�.", hour, min, sec);

	//���� ���� ����ϱ�
	//�ݾ��� �Է¹޾� 500��, 100��, 50��, 10�� ������ ���� �� �� �ʿ����� ����ϴ� ���α׷�.
	//�ݾ��� ū ������ �ִ��� ���� �޾ƾ� �Ѵ�.

	//int Money, mon500, mon100, mon50, mon10;

	//std::cin >> Money;

	//mon500 = Money / 500;
	//Money -= ((Money / 500) * 500);
	//mon100 = Money / 100;
	//Money -= ((Money / 100) * 100);
	//mon50 = Money / 50;
	//Money -= ((Money / 50) * 50);
	//mon10 = Money / 10;

	//printf("�ʿ��� ����\n 500�� : %d��\n100�� : %d��\n50�� : %d��\n10�� : %d��\n", mon500, mon100, mon50, mon10);

	/*
	�ڸ��� �и��ϱ�(�Է��� �׻� ���ڸ���� ����)
	���� �Է¹ް� 100�� �ڸ�, 10�� �ڸ�, 1�� �ڸ��� ���� ����ϱ�
	�� �ڸ��� ���� ���ؼ� ����ϱ�
	*/

	int Number, num100, num10, num1;
	std::cin >> Number;

	num100 = Number / 100;
	Number -= num100 * 100;
	num10 = Number / 10;
	Number -= num10 * 10;
	num1 = Number;

	printf("100�� �ڸ� : %d\n10�� �ڸ� : %d\n1�� �ڸ� : %d\n", num100, num10, num1);

	return 0;
}