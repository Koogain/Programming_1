/* 파일명: Assignmment_01.c

 * 내용: 한 변의 길이를 입력받아 정사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.3.31

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int circumference(int side)
{
	return side * 4;
}
int area1(int side)
{
	return side * side;
}
void assignment0301(void)
{
	int side = 0;
	int area = 0;
	int circum = 0;
	printf("한 변의 길이? ");
	scanf("%d", &side);
	area = area1(side);
	circum = circumference(side);
	printf("정사각형의 넓이 : %d\n", area);
	printf("정사각형의 둘레 : %d\n", circum);
}
int main(void)
{
	assignment0301();

	return 0;
}