/* 파일명: Assignmment_05.c

 * 내용: 온도를 입력받아 섭씨 온도는 화씨 온도로, 화씨 온도는 섭씨 온도로 변환하는 프로그램을 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.4.20

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0505(void)
{
	char unit;
	double input = 0.0, result = 0.0;

	printf("온도? ");
	scanf("%lf %c", &input, &unit);  

	if (unit == 'C' || unit == 'c')
	{
		result = input * 9.0 / 5.0 + 32.0;  // C → F
		printf("%.2lf C ==> %.2lf F\n", input, result);
	}
	else if (unit == 'F' || unit == 'f')
	{
		result = (input - 32.0) * 5.0 / 9.0;  // F → C
		printf("%.2lf F ==> %.2lf C\n", input, result);
	}
	else
	{
		printf("잘못된 단위입니다.\n");
		return;
	}
}
int main(void)
{
	assignment0505();

	return 0;
}