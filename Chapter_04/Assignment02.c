/* ���ϸ�: Assignmment_02.c

 * ����: ȭ�� �µ�(F)�� �Ǽ��� �Է¹޾� ���� �µ�(C)�� ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.      

 * �ۼ���: ������

 * ��¥: 2025.4.6

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double c_temperature(double f_temperature)
{
	return 5.0 / 9.0 * (f_temperature - 32);  // ���� �µ� = (ȭ�� �µ� -32) * 5 / 9
}
void assignment0402(void)
{
	double f_temperature = 0;
	double c = 0;
	printf("ȭ�� �µ�? ");
	scanf("%lf", &f_temperature);
	c = c_temperature(f_temperature);
	printf("%.2lf F = %.2lf C\n", f_temperature, c);
}
int main(void)
{
	assignment0402();

	return 0;
}