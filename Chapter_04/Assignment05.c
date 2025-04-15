/* 파일명: Assignmment_05.c

 * 내용: 반지름과 높이를 정수로 입력받아 원기둥의 부피를 구하는 프로그램을 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.4.15

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double volome_of_cylinder(int radius, int height, const double PI)
{
	return PI * radius * radius * height;
}
void assiignemnt0405(void)
{
	int radius = 0, height = 0;
	double result = 0.0;
	const double PI = 3.141592;
	printf("반지름의 길이? ");
	scanf("%d", &radius);
	printf("높이? ");
	scanf("%d", &height);
	result = volome_of_cylinder(radius, height, PI);
	printf("원기둥의 부피: %.6lf\n", result);
}
int main(void)
{
	assiignemnt0405();
	return 0;
}