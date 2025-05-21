/* 파일명: Assignmment_19.c

 * 내용: 수치 데이터와 스케일을 인자로 받아 그래프를 출력하는 graph함수를 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.05.13

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)		//main함수
{
	randNum();
	return 0;
}
void randNum()			// 0~9999 사이의 난수 생성
{
	int i, rnum;
	srand((unsigned int)time(NULL));

	for (i = 0; i < 3; i++) 
	{
		rnum = rand() % 10000;
		printf("%d:", rnum);
		graph(rnum);
		printf("\n");
	}

}
void graph(int rnum)		// 스케일 100으로 별 출력
{
	int i;

	for (i = 0; i < rnum / 100; i++)
	{
		printf("*");
	}
}