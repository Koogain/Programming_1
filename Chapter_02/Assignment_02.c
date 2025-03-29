/* 파일명: Assignmment_02.c

 * 내용: 학생의 번호와 학점을 입력받아 출력하는 프로그램을 작성하시오. 학생의 번호는 정수로, 학점은 실수로 입력받는다.

 * 작성자: 구가인

 * 날짜: 2025.3.29

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
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