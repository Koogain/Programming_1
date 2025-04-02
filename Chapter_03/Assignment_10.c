/* 파일명: Assignmment_10.c

 * 내용: 원/달러 환율과 달러를 입력받아 몇 원이지 출력하는 프로그램을 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.4.1

 * 버전: v1.0

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
	printf("원/달러 환율? ");
	scanf("%lf", &exchangeRate);
	won = krw(dollar, exchangeRate);
	printf("USD %.2lf = KRW %.2lf\n", dollar, won);
}
int main(void)
{
	assignment0310();

	return 0;
}