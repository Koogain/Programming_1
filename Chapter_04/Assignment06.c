/* 파일명: Assignmment_06.c

 * 내용: 점 A의 좌표 (x1, y1)와 점 B의 좌표(x2, y2)를 정수로 입력받아 두 점 A, B를 지나는	
         직선의 기울기를 구하는 프로그램을 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.4.15

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double slope(int x1, int y1, int x2, int y2)
{
	return (double)(y2 - y1) / (x2 - x1);
}
void assignment0406(void)
{
	int x1 = 0, x2 = 0;
	int y1 = 0, y2 = 0;
	double result = 0.0;
	printf("한 점의 좌표(x1, y1)? ");
	scanf("%d %d", &x1, &y1);
	printf("또 다른 한 점의 좌표(x2, y2) ? ");
	scanf("%d %d", &x2, &y2);
	result = slope(x1, y1, x2, y2);
	printf("직선의 기울기: %.6lf\n", result);
}
int main(void)
{
	assignment0406();
	return 0;
}