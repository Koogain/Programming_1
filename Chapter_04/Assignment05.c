/* ���ϸ�: Assignmment_05.c

 * ����: �������� ���̸� ������ �Է¹޾� ������� ���Ǹ� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.4.15

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double volome_of_cylinder(int radius, int height, const double PI)
{
	return PI * radius * radius * height;
}
void assiignemnt0405(void)
{
	int radius = 0, height = 0;
	double result = 0.0;
	const double PI = 3.141592;
	printf("�������� ����? ");
	scanf("%d", &radius);
	printf("����? ");
	scanf("%d", &height);
	result = volome_of_cylinder(radius, height, PI);
	printf("������� ����: %.6lf\n", result);
}
int main(void)
{
	assiignemnt0405();
	return 0;
}