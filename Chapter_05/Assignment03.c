/* ���ϸ�: Assignmment_03.c

 * ����: �Ž������� �ݾ��� �Է¹޾� ������, ����, ��õ��, õ��, ���, �ʿ�¥���� ���� �� �� �ʿ����� ���ؼ� ����Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.4.20

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0502(int money);
int InputMoney(); //�Լ� ����

int main(void)
{
	int money = InputMoney();
	assignment0502(money);

	return 0;
}
int InputMoney() //�Լ� ����
{
	int money = 0; //���� ����

	printf("�Ž�����? ");
	scanf("%d", &money);

	return money;
}
int assignment0502(int money)
{
	int truncated = 0;
	int won50000 = 0, won10000 = 0, won5000 = 0, won1000 = 0, won100 = 0, won10 = 0;

	truncated = (money / 10) * 10;
	printf("�Ž����� (10���̸� ����): %d��\n", truncated);

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
	printf("������: %d��\n", won50000);
	printf("����: %d��\n", won10000);
	printf("õ��: %d��\n", won1000);
	printf("���: %d��\n", won100);
	printf("�ʿ�: %d��\n", won10);
	return 0;
}
