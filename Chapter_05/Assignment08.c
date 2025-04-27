/* 파일명: Assignmment_08.c

 * 내용: 비트 연산을 수행하는 계산기를 프로그램하시오.
 
 * 작성자: 구가인

 * 날짜: 2025.4.20

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0508(void)
{
	int a = 0, b = 0;
	char op = 0;
	int result = 0;
	printf("비트 연산식? ");
	scanf("%i %c %i", &a, &op, &b);  
	switch (op)
	{
	case '&':
		result = a & b;
		break;
	case '|':
		result = a | b;
		break;
	case '^':
		result = a ^ b;
		break;
	default:
		printf("잘못된 연산자입니다.\n");
		return;
	}
	printf("%X %c %X = %X\n", a, op, b, result);
}
int main(void)
{
	assignment0508();

	return 0;
}