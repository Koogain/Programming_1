/* 파일명: Assignmment_01.c

 * 내용: Chapter04-01 문제 - 질량과 속력을 입력받아 운동에너지를 출력하는 프로그램

 * 작성자: 구가인

 * 날짜: 2025.4.9

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0401(void);
double getMotionEnergy(double weight, double velocity); // mian 함수 전에 프로토타입 함수 선언

int main(void)
{
	assignment0401();

	return 0;
}

/*
    함수명: assginemt0401()
	기능(책임): 질량, 속력을 입력받음, 운동에너지를 계산하도록 함수호출, 그 결과를 콘솔에 출력
	입력: 없음
	반환: 정수이며 0이면 성공, 그 외의 값은 에러이다.

 */
int assignment0401(void)
{
	// 1. 질량, 속도 입력받아 저장
	double weight = 0.0; // 질량(kg)
	double velocity = 0.0; // 속도(m/s)
	printf("질량 속도를 입력해주세요: ");
	scanf_s("%lf %lf", &weight, &velocity);

	// 2. 운동에너지 계산
	double result = getMotionEnergy(weight, velocity);

	// 3. 계산된 운동에너지 출력
	printf(" 질량 = %.2lf kg, 속도 = %.2lf m/s 의 운동에너지는 %.2f J 입니다.\n", weight, velocity, result);

	return 0;
}

/*
    함수명: getMotionEnergy()
	기능(책임): 질량, 속력 입력받아 운동에너지를 계산하여 반환
	입력: 질량(kg), 속력(m/s)
	반환: 운동에너지
*/
double getMotionEnergy(double weight, double velocity)
{
	double energy = 0.0;

	// 에너지 = 1/2 * 질량 * 속도 * 속도
	energy = 1.0 / 2.0 * weight * velocity * velocity;

	return energy;
}