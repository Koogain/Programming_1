/* 파일명: Assignmment_07.c

 * 내용: 실수값을 입력받아 그 값의 제곱과 세제곱을 출력하는 프로그램을 작성하시오. 실수값을 입력받을 때는 12.34처럼 소수 표기 방법이나
         1.234e+1처럼 지수 표기 방법을 둘 다 사용할 수 있게 하고 제곱과 세제곱을 출력할 때는 지수 표기 방법으로 출력하시오.       

 * 작성자: 구가인

 * 날짜: 2025.4.1

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double sqare(double num)
{
    return num * num;
}
double cube(double num)
{
    return num * num * num;
}
void assignment0307(void)
{
    double num = 0;
    double sqare1 = 0;
    double cube1 = 0;
    printf("실수? ");
    scanf("%lf", &num);
    sqare1 = sqare(num);
    cube1 = cube(num);
    printf("제곱 : %e\n", sqare1);
    printf("세제곱 : %e\n", cube1);

}
int main(void)
{
    assignment0307();

    return 0;
}