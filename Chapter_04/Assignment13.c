/* 파일명: Assignmment_13.c

 * 내용: 직선의 시작점의 좌표(x1, y1)와 끝점의 좌표(x2, y2)를 입력받아서 직선의 길이를 구하는 프로그램을 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.4.15

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double LineLength(int x1, int y1, int x2, int y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
void assignment0413(void)
{
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	double result = 0;
	printf("직선의 시작점(x1, y1)? ");
	scanf("%d %d", &x1, &y1);
	printf("직선의 끝점(x2, y2)? ");
	scanf("%d %d", &x2, &y2);
	result = LineLength(x1, y1, x2, y2);
	printf("직선의 길이: %.6f입니다.\n", result);
}
int main(void)
{
	assignment0413();

	return 0;
}