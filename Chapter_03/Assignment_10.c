/* ���ϸ�: Assignmment_10.c

 * ����: ��/�޷� ȯ���� �޷��� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.4.1

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double krw(double dollar, double exchangerate)
{
	return dollar * exchangerate;
}
void assignment0310(void)
{
	double dollar = 0;
	double exchangeRate = 0;
	double won = 0;
	printf("USD? ");
	scanf("%lf", &dollar);
	printf("��/�޷� ȯ��? ");
	scanf("%lf", &exchangeRate);
	won = krw(dollar, exchangeRate);
	printf("USD %.2lf = KRW %.2lf\n", dollar, won);
}
int main(void)
{
	assignment0310();

	return 0;
}