/* 파일명: Assignmment_02.c

 * 내용: Visual Studio를 이용해서 다음과 같이 C 프로그램을 작성하고, 빌드 후 실행하시오.

 * 작성자: 구가인

 * 날짜: 2025.3.29

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float numer;

	printf("몸무게? ");
	scanf("%f", &numer);

	printf("입력한 몸무게는 %.2fKG입니다.\n", numer);

	return 0;
}
