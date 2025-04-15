/* 파일명: Assignmment_17.c

 * 내용: Chapter04-17 32비트 크기의 데이터에는  0-31번 비트가 존재, 7번째 비트만 1인 값, 15번째 비트만 1인 값,
					  23번쨔 비트만 1인 값, 31번째 비트만 1인 값을 구해서 16진수와 1-진수로 출력하는 프로그램을 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.4.12

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment(void)
{
	unsigned int x = 1;

	x = x << 7;
	printf("7번 비트만 1인 값: %08x %d\n", x, x);
	x = x << 8;
	printf("15번 비트만 1인 값: %08x %d\n", x, x);
	x = x << 8;
	printf("23번 비트만 1인 값: %08x %d\n", x, x);
	x = x << 8;
	printf("31번 비트만 1인 값: %08x %d", x, x);
}
int main(void)
{
	assignment();

	return 0;
}