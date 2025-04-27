#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0502(int money);

int main(void)
{
	int won50000 = 0, won10000 = 0, won5000 = 0, won1000 = 0, won100 = 0, won10 = 0;
	int truncated = 0, money = 0;
	int reslut = assignment0502(money);
	printf("오만원 : %d장\n", won50000);
	printf("만원 : %d장\n", won10000);
	printf("오천원 : %d장\n", won5000);
	printf("천원 : %d장\n", won1000);
	printf("백원 : %d개\n", won100);
	printf("십원 : %d개\n", won10);
	return 0;
}
int assignment0502(int money)
{
	int won50000 = 0, won10000 = 0, won5000 = 0, won1000 = 0, won100 = 0, won10 = 0;
	int truncated = 0, money = 0;
	printf("거스름돈? ");
	scanf("%d", &money);
	truncated = (money / 10) * 10;
	printf("거스름돈 (10원미만 절사): %d원\n", truncated);
	won50000 = money / 50000;
	money %= 50000;
	won10000 = money / 10000;
	money %= 10000;
	won5000 = money / 5000;
	money %= 5000;
	won1000 = money / 1000;
	money %= 1000;
	won100 = money / 100;
	money %= 100;
	won10 = money / 10;
	money %= 10;

	return money;
}
