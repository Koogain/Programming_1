/* 파일명: Assignmment_08.c

 * 내용: Chapter04-08 반지름의 길이를 입력받아 구의 부피를 출력하는 프로그램

 * 작성자: 구가인

 * 날짜: 2025.4.11

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double SphereVolume(double radius);
int assignment0408(void);

/*
	함수명: assginemt0408()
	기능(책임): 반지름을 입력받음, 구의 부피를 계산하도록 함수호출, 그 결과를 콘솔에 출력
	입력: 반지름을 입력받음
	반환: 정수이며 0이면 성공, 그 외의 값은 에러이다.

 */
int assignment0408(void)
{
	// 1. 반지름을 입력받아 저장
	double radius = 0; // 반지름(radius)
	printf("반지름의 길이? ");
	scanf_s("%lf", &radius);

	// 2. 운동에너지 계산
	double result = SphereVolume(radius);

	// 3. 계산된 구의 부피 출력
	printf("구의 부피: %.6lf\n", result);

	return 0;
}

/*
	함수명: SphereVolume()
	기능(책임): 반지름을 입력받아 계산	
	입력: 반지름(radius)
	반환: 운동에너지
*/
double SphereVolume(double radius)
{
	double volume = 0.0;

	// 부피 = 4/3 * pi * 반지름 * 반지름 * 반지름
	volume = (4.0 / 3.0) * 3.141592 * radius * radius * radius;

	return volume;
}

int main(void)
{
	assignment0408();

	return 0;
}