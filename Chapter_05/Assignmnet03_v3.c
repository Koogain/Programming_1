#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0502(int money);

int main(void)
{
	int won50000 = 0, won10000 = 0, won5000 = 0, won1000 = 0, won100 = 0, won10 = 0;
	int truncated = 0, money = 0;
	int reslut = assignment0502(money);
	printf("������ : %d��\n", won50000);
	printf("���� : %d��\n", won10000);
	printf("��õ�� : %d��\n", won5000);
	printf("õ�� : %d��\n", won1000);
	printf("��� : %d��\n", won100);
	printf("�ʿ� : %d��\n", won10);
	return 0;
}
int assignment0502(int money)
{
	int won50000 = 0, won10000 = 0, won5000 = 0, won1000 = 0, won100 = 0, won10 = 0;
	int truncated = 0, money = 0;
	printf("�Ž�����? ");
	scanf("%d", &money);
	truncated = (money / 10) * 10;
	printf("�Ž����� (10���̸� ����): %d��\n", truncated);
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
