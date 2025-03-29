/* 파일명: Assignmment_02.c

 * 내용: Visual Studio를 이용해서 다음과 같이 C 프로그램을 작성하고, 빌드 후 실행하시오.

 * 작성자: 구가인

 * 날짜: 2025.3.29

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number;

	printf("번호? ");
	scanf("%d", &number);

	float grade;

	printf("학점? ");
	scanf("%f", &grade);

	printf("%d번 학생의 학점은 %f입니다.", number, grade);

	return 0;
}