/* 파일명: Assignmment_05.c

 * 내용: 몸무게를 입력받아 출력하는 프로그램을 작성하시오. 몸무게는 실수로 입력받으며, 소수점 이하 둘째 자리까지 출력한다.

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
