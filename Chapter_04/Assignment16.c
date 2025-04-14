/* 파일명: Assignmment_16.c

 * 내용: Chapter04-16 32비트 데이터의 최하위 바이트부터 red, green, blue의 순서로 3개 입력받아서 RGB 생상을 만들어서
					  출력하는 프로그램을 작성하시오.RGB 색상을 출력할 떄는 16진수로 출력한다.

 * 작성자: 구가인

 * 날짜: 2025.4.12

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int truecolor(int r, int g, int b)
{
	return (r & 0xFF) | ((g & 0xFF) << 8) | ((b & 0xFF) << 16);
}
void assignment0416(void)
{
	unsigned int r = 0, g = 0, b = 0;
	int color = 0;
	printf("red? ");
	scanf("%d", &r);
	printf("green? ");
	scanf("%d", &g);
	printf("blue? ");
	scanf("%d", &b);
	color = truecolor(r, g, b);
	printf("RGB 트루 컬러: %06X\n", color);
}
int  main(void)
{
	assignment0416();

	return 0;
}