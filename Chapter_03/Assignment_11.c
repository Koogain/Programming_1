/* ���ϸ�: Assignmment_11.c

 * ����: ��/�޷� ȯ���� ��ȭ�� �Է¹޾� �� �޷����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.4.1

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double exchageRate, dollar;
	int won;

	printf("KRW? ");
	scanf("%d", &won);

	printf("��/�޷� ȯ��? ");
	scanf("%lf", &exchageRate);

	dollar = won / exchageRate;

	printf("KRW %d = USD %.2lf", won, dollar);

	return 0;
}