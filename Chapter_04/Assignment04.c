/* 파일명: Assignmment_04.c

 * 내용: 용매의 질량과 용질의 질량을 정수로 입력받아 용액의 퍼센트 농도를 구하는 프로그램을 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.4.15

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double concentration(int solvent, int solute)
{
	return (double)solute / (solvent + solute) * 100.0;
}
void assignment0404(void)
{
	int solvent = 0, solute = 0;
	double result = 0.0;
	printf("용매(g)? ");
	scanf("%d", &solvent);
	printf("용질(g)? ");
	scanf("%d", &solute);
	result = concentration(solvent, solute);
	printf("농도: %.2lf %%\n", result);
}
int main(void)
{
	assignment0404();
	return 0;
}