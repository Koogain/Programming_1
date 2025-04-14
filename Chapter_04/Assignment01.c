/* 파일명: Assignmment_01.c

 * 내용: 질량과 속력을 입력받아 운동 에너지가 구하는 프로그램을 작성하시오. 질량은 kg 단위, 속력은 m/s 단위로 입력받는다.

 * 작성자: 구가인

 * 날짜: 2025.4.3

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double energy(double mass, double speed)
{
	return 0.5 * mass * speed * speed;
}
void assignment0401(void)
{
	double mass, e, speed = 0;
	printf("질량(kg)? ");
	scanf("%lf", &mass);
	printf("속력(m/s)? ");
	scanf("%lf", &speed);
	e = energy(mass, speed);
	printf("운동에너지: %.2lf J", e);
}
int main(void)
{
	assignment0401();

	return 0;
}