/* ���ϸ�: Assignmment_01.c

 * ����: ������ �ӷ��� �Է¹޾� � �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ������ kg ����, �ӷ��� m/s ������ �Է¹޴´�.

 * �ۼ���: ������

 * ��¥: 2025.4.3

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double energy(double mass, double speed)
{
	return 0.5 * mass * speed * speed;
}
void assignment0401(void)
{
	double mass, e, speed = 0;
	printf("����(kg)? ");
	scanf("%lf", &mass);
	printf("�ӷ�(m/s)? ");
	scanf("%lf", &speed);
	e = energy(mass, speed);
	printf("�������: %.2lf J", e);
}
int main(void)
{
	assignment0401();

	return 0;
}