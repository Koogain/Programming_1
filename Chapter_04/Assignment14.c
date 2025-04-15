/* 파일명: Assignmment_14.c

 * 내용: 기본 요금과 월 사용량(kWh)을 입력받아서 전기 요금을 계산하는 프로그램을 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.4.15

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ElectricBill(int basic, int usage, const int pay)
{
	return basic + usage * pay;
}
void assignment0414(void)
{
	int basic = 0, usage = 0;
	int result = 0;
	const int pay = 190;
	printf("기본 요금? ");
	scanf("%d", &basic);
	printf("월 사용량(kWh)? ");
	scanf("%d", &usage);
	result = ElectricBill(basic, usage, pay);
	printf("전기 요금: %d원\n", result);
}
int main(void)
{
	assignment0414();
	return 0;
}