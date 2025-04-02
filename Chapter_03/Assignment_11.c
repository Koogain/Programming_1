/* 파일명: Assignmment_11.c

 * 내용: 원/달러 환율과 원화를 입력받아 몇 달러인지 출력하는 프로그램을 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.4.1

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double exchageRate, dollar;
	int won;

	printf("KRW? ");
	scanf("%d", &won);

	printf("원/달러 환율? ");
	scanf("%lf", &exchageRate);

	dollar = won / exchageRate;

	printf("KRW %d = USD %.2lf", won, dollar);

	return 0;
}