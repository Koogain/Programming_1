/* ���ϸ�: Assignmment_06.c

 * ����: �� A�� ��ǥ (x1, y1)�� �� B�� ��ǥ(x2, y2)�� ������ �Է¹޾� �� �� A, B�� ������	
         ������ ���⸦ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.4.15

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double slope(int x1, int y1, int x2, int y2)
{
	return (double)(y2 - y1) / (x2 - x1);
}
void assignment0406(void)
{
	int x1 = 0, x2 = 0;
	int y1 = 0, y2 = 0;
	double result = 0.0;
	printf("�� ���� ��ǥ(x1, y1)? ");
	scanf("%d %d", &x1, &y1);
	printf("�� �ٸ� �� ���� ��ǥ(x2, y2) ? ");
	scanf("%d %d", &x2, &y2);
	result = slope(x1, y1, x2, y2);
	printf("������ ����: %.6lf\n", result);
}
int main(void)
{
	assignment0406();
	return 0;
}