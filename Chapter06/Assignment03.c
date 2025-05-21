/* 파일명: Assignmment_03.c

 * 내용: 두 점 사이의 직선 거리를 구하는 distance함수를 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.05.12

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int InputX1();
int InputX2();
int InputY1();
int InputY2();
double distance(int x1, int y1, int x2, int y2);

int temp_x, temp_y;

int main(void)
{
	int x1 = InputX1();
	int y1 = InputY1();
	int x2 = InputX2();
	int y2 = InputY2();
	distance(x1, y1, x2, y2);
	return 0;
}
int InputX1()
{
	printf("지선의 시작점 좌표? ");
	scanf("%d %d", &temp_x, &temp_y);
	return temp_x;
}
int InputY1()
{
	return temp_y;
}

int InputX2()
{
	printf("직선의 끝점 좌표? ");
	scanf("%d %d", &temp_x, &temp_y);
	return temp_x;
}
int InputY2()
{
	return temp_y;
}
double distance(int x1, int y1, int x2, int y2)
{
	double result;
	result = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	printf("(%d, %d)~(%d, %d) 직선의 길이: %lf", x1, y1, x2, y2, result);
	return result;
}