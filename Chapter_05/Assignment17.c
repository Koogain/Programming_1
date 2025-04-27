/* 파일명: Assignmment_17.c

 * 내용: 주차 시간을 분으로 입력받아서 주차 요금을 계산하는 프로그램을 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.4.20

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignmen0517(void)
{
	int minute = 0, price_type = 0, price =0;
	printf("주차 시간(분)? ");
	scanf("%d", &minute);

	price_type = (minute + 9) / 10;  // 10분 단위로 올림

    if (price_type <= 3)
    {
        price = price_type * 1000;  // 30분 이하
    }
    else if (price_type < 24)
    {
        price = 2000 + (price_type - 3) * 1000;  // 30분 초과 ~ 4시간 미만
    }
    else
    {
        price = 25000;  // 하루 최대 요금
    }

	printf("주차 요금: %d\n", price);

}
int main(void)
{
	assignmen0517();

	return 0;
}