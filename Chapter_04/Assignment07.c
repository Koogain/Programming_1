/* ���ϸ�: Assignmment_07.c

 * ����: �����ﰢ���� ������ �� �� �� a, b�� ���̸� �Է¹޾� ������ ���̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.4.15

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double hypotenuse(int a, int b)
{
	return sqrt(a * a + b * b);
}
void assignemnt0407(void)
{
	int a = 0, b = 0;
	double result = 0.0;
	printf("�غ�? ");
	scanf("%d", &a);
	printf("����? ");
	scanf("%d", &b);
	result = hypotenuse(a, b);
	printf("������ ����: %.6lf\n", result);
}
int main(void)
{
	assignemnt0407();
	return 0;
}