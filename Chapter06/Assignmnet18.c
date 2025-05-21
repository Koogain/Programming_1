/* 파일명: Assignmment_18.c

 * 내용: 인자로 전달된 정수의 약수를 구해서 출력하는 divisors함수를 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.05.13

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomNum(void);
void divisors(int rnum);

int main(void)
{
	randomNum();		//랜덤
	return 0;
}
void randomNum(void) 
{
	int i, j, cnt = 0;

	srand((unsigned int)time(NULL));		//랜덤 시드(seed) 를 설정

	for (i = 0; i < 3; i++) 
	{
		int rnum = rand() % 1000;
		divisors(rnum);
	}
}
void divisors(int rnum)		//약수 구하기 및 출력
{
	int i, cnt = 0;
	printf("%d의 약수: ", rnum);

	for (i = 1; i <= rnum; i++)
	{

		if (rnum % i == 0) {
			cnt++;
			printf("%d ", i);
		}
	}
	printf("=> 총 %d개\n", cnt);
}