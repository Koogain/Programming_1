/* 파일명: Assignmment_09.c

 * 내용: 햄버거 가게의 계산서 프로그램을 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.4.20

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define burger_price 4000
#define potato_price 2000
#define coke_price 1500
#define set_price 6500

void assignment0509(void)
{
	int burger = 0, potato = 0, coke = 0, set = 0;
	int total = 0;
	printf("[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원]\n");

	printf("햄버거 개수? ");
	scanf("%d", &burger);
	printf("감자튀김 개수? ");
	scanf("%d", &potato);
	printf("콜라 개수? ");
	scanf("%d", &coke);

	printf("\n");

	// 원래 개수 보존용
	int burger_single = burger;
	int potato_single = potato;
	int coke_single = coke;

	// 세트 개수 계산
	while (burger_single > 0 && potato_single > 0 && coke_single > 0)
	{
		burger_single--;
		potato_single--;
		coke_single--;
		set++;
	}

	// 남은 단품 개수 계산
	burger_single = burger - set;
	potato_single = potato - set;
	coke_single = coke - set;

	// 합계 계산
	total = (set * set_price) +
		(burger_single * burger_price) +
		(potato_single * potato_price) +
		(coke_single * coke_price);

	while (1)
	{
		if (burger > 0 && potato > 0 && coke > 0)
		{
			burger--;
			potato--;
			coke--;

			set++;
		}
		else
		{
			total += set * set_price;
			total += burger * burger_price;
			total += potato * potato_price;
			total += coke * coke_price;
			break;
		}
	}

	printf("상품명      단가   수량   금액\n");
	printf("세트        %4d   %3d  %6d\n", set_price, set, set * set_price);
	printf("햄버거      %4d   %3d  %6d\n", burger_price, burger, burger * burger_price);
	printf("감자튀김    %4d   %3d  %6d\n", potato_price, potato, potato * potato_price);
	printf("------------------------------\n");
	printf("합계                   %7d", total);

}
int main(void)
{
	assignment0509();

	return 0;
}