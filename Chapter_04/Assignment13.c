/* ���ϸ�: Assignmment_13.c

 * ����: ������ �������� ��ǥ(x1, y1)�� ������ ��ǥ(x2, y2)�� �Է¹޾Ƽ� ������ ���̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.4.15

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double LineLength(int x1, int y1, int x2, int y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
void assignment0413(void)
{
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	double result = 0;
	printf("������ ������(x1, y1)? ");
	scanf("%d %d", &x1, &y1);
	printf("������ ����(x2, y2)? ");
	scanf("%d %d", &x2, &y2);
	result = LineLength(x1, y1, x2, y2);
	printf("������ ����: %.6f�Դϴ�.\n", result);
}
int main(void)
{
	assignment0413();

	return 0;
}