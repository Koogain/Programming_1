/* ���ϸ�: Assignmment_03.c

 * ����: ������ ���Ǹ� �Ǽ��� �Է¹޾� �е��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ������ g ������ �Է¹ް�, 
         ���Ǵ� cm^3 ������ �Է¹޴´�.

 * �ۼ���: ������

 * ��¥: 2025.4.15

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double density(double mass, double volume)
{
    return mass / volume;
}
void assignment0403(void)
{
    double mass = 0.0, volume = 0.0;
	double result = 0.0;

    printf("����(g)? ");
	scanf("%lf", &mass);
    printf("����(��������Ƽ����)? ");
    scanf("%lf", &volume);
	result = density(mass, volume);
    printf("�е�: %.6lf\n", result);
}
int main(void)
{
	assignment0403();
	return 0;
}