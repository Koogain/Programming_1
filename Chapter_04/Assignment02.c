/* 파일명: Assignmment_02.c

 * 내용: 화씨 온도(F)를 실수로 입력받아 섭씨 온도(C)로 변환해서 출력하는 프로그램을 작성하시오.      

 * 작성자: 구가인

 * 날짜: 2025.4.6

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double c_temperature(double f_temperature)
{
	return 5.0 / 9.0 * (f_temperature - 32);  // 섭씨 온도 = (화씨 온도 -32) * 5 / 9
}
void assignment0402(void)
{
	double f_temperature = 0;
	double c = 0;
	printf("화씨 온도? ");
	scanf("%lf", &f_temperature);
	c = c_temperature(f_temperature);
	printf("%.2lf F = %.2lf C\n", f_temperature, c);
}
int main(void)
{
	assignment0402();

	return 0;
}