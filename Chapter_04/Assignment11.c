/* ���ϸ�: Assignmment_11.c

 * ����: ��ǰ�� ���ݰ� ������(%)�� �Է¹޾Ƽ� ���ΰ��� ������ �ݾ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.4.15

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Enuri(int price, int Dcpercent)
{
	return price * (Dcpercent / 100.0);
}
void assignment0411(void)
{
	int price = 0, Dcpercent = 0;
	int Dcprice = 0, result = 0;
	printf("��ǰ�� ����? ");
	scanf("%d", &price);
	printf("������? ");
	scanf("%d", &Dcpercent);
	result = Enuri(price, Dcpercent);
	Dcprice = price - result;
	printf("���ΰ�: %d�� (%d�� ����)\n", Dcprice, result);
}
int main(void)
{
	assignment0411();

	return 0;
}