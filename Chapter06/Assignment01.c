/* ���ϸ�: Assignmment_01.c

 * ����: ���ο� ������ ���̸� �Ű������� ���޹޾� ���簢���� �ѷ��� ���ϴ� get_perimeter�Լ��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.05.12

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double InputHeight();
double InputWidth();
void get_perimeter(double width, double height);

int main(void)
{
	double width = InputWidth();
	double height = InputHeight();
	get_perimeter(width, height);
	return 0;
}
double InputWidth()
{
	double width;
	printf("����? ");
	scanf("%lf", &width);
	return width;
}
double InputHeight()
{
	double height;
	printf("���� ? ");
	scanf("%lf", &height);
	return height;
}
void get_perimeter(double width, double height)
{
	double result;
	result = (width + height) * 2;
	printf("���簢���� �ѷ�: %.0lf", result);
}
