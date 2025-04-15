/* 파일명: Assignmment_10.c

 * 내용: 항공권 예약 시 여정의 총 소요시간을 시간 단위로 입력받아서 며칠 몇 시간 몇 분인지 출력하는 프로그램을 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.4.15

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float d_time(int minute, int hour, int day)
{
	return (minute / 60) / 24;
}
float h_time(int minute, int hour, int day)
{
	return (minute / 60) % 24;
}
float m_time(int minute, int hour, int day)
{
	return minute % 60;
}
void assignment0410(void)
{
    double totalHours = 0;
    int days = 0, hours = 0, minutes = 0;
    printf("비행 소요 시간(시간)? ");
    scanf("%lf", &totalHours);

    days = (int)(totalHours / 24);
    hours = (int)((int)totalHours % 24);
    minutes = (int)((totalHours - (int)totalHours) * 60);

    printf("비행 소요 시간은 %d일 %d시간 %d분입니다.\n", days, hours, minutes);
}
int main(void)
{
	assignment0410();
	return 0;
}