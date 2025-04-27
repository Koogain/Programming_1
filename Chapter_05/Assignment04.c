/* 파일명: Assignmment_04.c

 * 내용: 연도를 입력받아 윤년인지 검사하는 프로그램을 작성하시오.
 
 * 작성자: 구가인

 * 날짜: 2025.4.20

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0504(void)
{
	int year = 0;
	printf("연도? ");
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("%d년은 윤년입니다.\n", year);
	}
	else
	{
		printf("%d년은 윤년이 아닙니다.\n", year);
	}
}
int main(void)
{
	assignment0504();

	return 0;
}