/* 파일명: Assignmment_07.c

 * 내용: 직각삼각형의 직각을 낀 두 변 a, b의 길이를 입력받아 빗변의 길이를 구하는 프로그램을 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.4.15

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double hypotenuse(int a, int b)
{
	return sqrt(a * a + b * b);
}
void assignemnt0407(void)
{
	int a = 0, b = 0;
	double result = 0.0;
	printf("밑변? ");
	scanf("%d", &a);
	printf("높이? ");
	scanf("%d", &b);
	result = hypotenuse(a, b);
	printf("빗변의 길이: %.6lf\n", result);
}
int main(void)
{
	assignemnt0407();
	return 0;
}