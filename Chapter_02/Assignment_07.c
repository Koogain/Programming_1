/* 파일명: Assignmment_07.c

 * 내용: 커피 사이즈(S, T, G)와 주문 수량을 입력받아 출력하는 프로그램을 작성하시오. 커피 사이즈는 S, T, G 세 가지
 *       문자 중 하나로 입력받는다.

 * 작성자: 구가인

 * 날짜: 2025.3.29

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char size;
	int number;


	printf("커피 사이즈(S, T, G)와 주문 수량? ");
	scanf("%c %d", &size, &number);

	printf("%c 사이즈 %d잔을 주문합니다.\n ", size, number);

	return 0;

}