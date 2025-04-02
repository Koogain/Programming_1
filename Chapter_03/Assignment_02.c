/* 파일명: Assignmment_02.c

 * 내용: 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.4.1

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int area(int width, int length)
{
	return width * length;
}
int perimeter(int width, int length)
{
	return 2 * (width + length);
}
void assignment0302(void)
{
	int width = 0;
	int length = 0;
	int area1 = 0;
	int perimeter1 = 0;
	printf("가로의 길이? ");
	scanf("%d", &width);
	printf("세로의 길이? ");
	scanf("%d", &length);
	area1 = area(width, length);
	perimeter1 = perimeter(width, length);
	printf("직사각형의 넓이 : %d\n", area1);
	printf("직사각형의 둘레 : %d\n", perimeter1);
}
int main(void)
{
	assignment0302();
	return 0;
}