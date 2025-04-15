/* 파일명: Assignmment_03.c

 * 내용: 질량과 부피를 실수로 입력받아 밀도를 구하는 프로그램을 작성하시오. 질량은 g 단위로 입력받고, 
         부피는 cm^3 단위로 입력받는다.

 * 작성자: 구가인

 * 날짜: 2025.4.15

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double density(double mass, double volume)
{
    return mass / volume;
}
void assignment0403(void)
{
    double mass = 0.0, volume = 0.0;
	double result = 0.0;

    printf("질량(g)? ");
	scanf("%lf", &mass);
    printf("부피(세제곱센티미터)? ");
    scanf("%lf", &volume);
	result = density(mass, volume);
    printf("밀도: %.6lf\n", result);
}
int main(void)
{
	assignment0403();
	return 0;
}