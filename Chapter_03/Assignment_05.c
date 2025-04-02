/* 파일명: Assignmment_05.c

 * 내용: 길이를 인치(inch) 입력받아 센티미터(cm)로 변환하는 프로그램을 작성하시오. 1 inch는 2.54cm에 해당한다.

 * 작성자: 구가인

 * 날짜: 2025.4.1

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	const float centimeter = 2.54;
	float inch, cm;

	printf("길이(inch)? ");
	scanf("%f", &inch);

	cm = inch * 2.54;

	printf("%f inch = %f cm", inch, cm);

	return 0;

}