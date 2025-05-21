/* 파일명: Assignmment_01.c

 * 내용: 가로와 세로의 길이를 매개변수로 전달받아 직사각형의 둘레를 구하는 get_perimeter함수를 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.05.12

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double InputHeight();
double InputWidth();
void get_perimeter(double width, double height);

int main(void)
{
	double width = InputWidth();
	double height = InputHeight();
	get_perimeter(width, height);
	return 0;
}
double InputWidth()
{
	double width;
	printf("가로? ");
	scanf("%lf", &width);
	return width;
}
double InputHeight()
{
	double height;
	printf("세로 ? ");
	scanf("%lf", &height);
	return height;
}
void get_perimeter(double width, double height)
{
	double result;
	result = (width + height) * 2;
	printf("직사각형의 둘레: %.0lf", result);
}
