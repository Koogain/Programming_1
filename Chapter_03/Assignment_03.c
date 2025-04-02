/* 파일명: Assignmment_03.c

 * 내용: 질량과 높이를 입력받아 위치에너지를 구하는 프로그램을 작성하시오. 질량은 kg 단위, 높이는 m 단위로 입력받는다.

 * 작성자: 구가인

 * 날짜: 2025.4.1

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double calcPositionEnergy1(int weight, int height)
{
	return weight * height * 9.8;
}
void assignment0303(void)
{
	double calcPositionEnergy = 9.8;
	double g;
	int weight = 0;
	int height = 0;
	printf("질량(kg)? ");
	scanf("%d", &weight);
	printf("높이(m)? ");
	scanf("%d", &height);
	g = calcPositionEnergy1(weight, height);
	printf("위치에너지 : %f J\n", g);
}
int main(void)
{
	assignment0303();

	return 0;
}