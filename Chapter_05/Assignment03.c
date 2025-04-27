/* 파일명: Assignmment_03.c

 * 내용: 거스름돈의 금액을 입력받아 오만원, 만원, 오천원, 천원, 백원, 십원짜리가 각각 몇 개 필요한지 구해서 출력하시오.

 * 작성자: 구가인

 * 날짜: 2025.4.20

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0502(int money);
int InputMoney(); //함수 선언

int main(void)
{
	int money = InputMoney();
	assignment0502(money);

	return 0;
}
int InputMoney() //함수 정의
{
	int money = 0; //지역 변수

	printf("거스름돈? ");
	scanf("%d", &money);

	return money;
}
int assignment0502(int money)
{
	int truncated = 0;
	int won50000 = 0, won10000 = 0, won5000 = 0, won1000 = 0, won100 = 0, won10 = 0;

	truncated = (money / 10) * 10;
	printf("거스름돈 (10원미만 절사): %d원\n", truncated);

	money = truncated;
	if (money > 50000)
	{
		won50000 = money / 50000;
		money %= 50000;
	}
	if (money > 10000)
	{
		won10000 = money / 10000;
		money %= 10000;
	}
	if (money > 5000)
	{
		won5000 = money / 5000;
		money %= 5000;
	}
	if (money > 1000)
	{
		won1000 = money / 1000;
		money %= 1000;
	}
	if (money > 100)
	{
		won100 = money / 100;
		money %= 100;
	}
	if (money > 10)
	{
		won10 = money / 10;
		money %= 10;
	}
	printf("오만원: %d장\n", won50000);
	printf("만원: %d장\n", won10000);
	printf("천원: %d장\n", won1000);
	printf("백원: %d개\n", won100);
	printf("십원: %d개\n", won10);
	return 0;
}
