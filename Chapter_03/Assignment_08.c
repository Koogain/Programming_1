/* 파일명: Assignmment_08.c

 * 내용: 길이를 야드(yard)로 입력받아 미터(m)로 변환해서 출력하는 프로그램을 작성하시오. 1 yd는 0.9144m에 해당한다.

 * 작성자: 구가인

 * 날짜: 2025.4.1

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int yd;
	double m;
	const double yard = 0.9144;

	printf("길이(yd)? ");
	scanf("%d", &yd);

	m = yd * yard;

	printf("%d yd = %0.6f m", yd, m);

	return 0;
}