/* ���ϸ�: Assignmment_01.c

 * ����: �� ���� ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.3.31

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int circumference(int side)
{
	return side * 4;
}
int area1(int side)
{
	return side * side;
}
void assignment0301(void)
{
	int side = 0;
	int area = 0;
	int circum = 0;
	printf("�� ���� ����? ");
	scanf("%d", &side);
	area = area1(side);
	circum = circumference(side);
	printf("���簢���� ���� : %d\n", area);
	printf("���簢���� �ѷ� : %d\n", circum);
}
int main(void)
{
	assignment0301();

	return 0;
}