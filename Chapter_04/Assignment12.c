/* 파일명: Assignmment_12.c

 * 내용: 내비게이션 앱에서 이동 거리와 에상 속력으로 도착 예정 시간을 구하는 프로그램을 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.4.15

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ArrivalTimeInMinutes(double distance, double speed)
{
	return (int) (distance / speed * 60);
}
void assignment0412(void)
{
    double distance = 0, speed = 0;
    int totalMinutes = 0;

    printf("이동 거리(km)? ");
    scanf("%lf", &distance);

    printf("예상 속력(km/h)? ");
    scanf("%lf", &speed);

    totalMinutes = ArrivalTimeInMinutes(distance, speed);

    printf("도착까지 예상 시간은 총 %d분입니다.\n", totalMinutes);
}
int main(void)
{
	assignment0412();
	return 0;
}