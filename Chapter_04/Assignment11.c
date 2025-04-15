/* 파일명: Assignmment_11.c

 * 내용: 제품의 가격과 할인율(%)을 입력받아서 할인가와 에누리 금액을 출력하는 프로그램을 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.4.15

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Enuri(int price, int Dcpercent)
{
	return price * (Dcpercent / 100.0);
}
void assignment0411(void)
{
	int price = 0, Dcpercent = 0;
	int Dcprice = 0, result = 0;
	printf("제품의 가격? ");
	scanf("%d", &price);
	printf("할인율? ");
	scanf("%d", &Dcpercent);
	result = Enuri(price, Dcpercent);
	Dcprice = price - result;
	printf("할인가: %d원 (%d원 할인)\n", Dcprice, result);
}
int main(void)
{
	assignment0411();

	return 0;
}