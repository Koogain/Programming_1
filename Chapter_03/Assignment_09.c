/* 파일명: Assignmment_09.c

 * 내용: 무게를 파운드(lb)로 입력받아 킬로그램(kg)으로 변환해서 출력하는 프로그램을 작성하시오. 1lb는 0.45359237kg이다.

 * 작성자: 구가인

 * 날짜: 2025.4.1

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int lb;
	double kg;

	printf("무게(lb)? ");
	scanf("%d", &lb);

	kg = lb * 0.45359237;

	printf("%d lb = %lf kg\n", lb, kg);

	return 0;
}