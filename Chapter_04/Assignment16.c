/* 파일명: Assignmment_16.c

 * 내용: Chapter04-16 32비트 데이터의 최하위 바이트부터 red, green, blue의 순서로 3개 입력받아서 RGB 생상을 만들어서
					  출력하는 프로그램을 작성하시오.RGB 색상을 출력할 떄는 16진수로 출력한다.

 * 작성자: 구가인

 * 날짜: 2025.4.12

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0416(void)
{
	int red, green, blue;
	int value;
	printf("red? ");
	scanf("%d", &red);
	red %= 256;

	printf("green? ");
	scanf("%d", &green);
	green %= 256;

	printf("blue? ");
	scanf("%d", &blue);
	blue %= 256;

	value = blue * 256 * 256;
	value += green * 256;
	value += red;

	printf("RGB 트루컬러: %06X", value);
}
int  main(void)
{
	assignment0416();

	return 0;
}