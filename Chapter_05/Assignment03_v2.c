/* ���ϸ�: Assignmment_03.c

 * ����: �Ž������� �ݾ��� �Է¹޾� ������, ����, õ��, ���, �ʿ�¥���� ���� �� �� �ʿ����� ���ؼ� ����Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.4.20

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0502(void);

int main(void)
{
	assignment0502();

	return 0;
}
void assignment0502(void)
{
	int truncated = 0, money = 0;
	int won50000 = 0, won10000 = 0, won1000 = 0, won100 = 0, won10 = 0;
	printf("�Ž�����? ");
	scanf("%d", &money);
	truncated = (money / 10) * 10;
	printf("�Ž����� (10���̸� ����): %d��\n", truncated);
	money = truncated;
	won50000 = money / 50000;
	money %= 50000;
	won10000 = money / 10000;
	money %= 10000;
	won1000 = money / 1000;
	money %= 1000;
	won100 = money / 100;
	money %= 100;
	won10 = money / 10;
	money %= 10;
	printf("������: %d��\n", won50000);
	printf("����: %d��\n", won10000);
	printf("õ��: %d��\n", won1000);
	printf("���: %d��\n", won100);
	printf("�ʿ�: %d��\n", won10);
}