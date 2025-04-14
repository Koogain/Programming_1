/* 파일명: Assignmment_09.c

 * 내용: Chapter04-09 동영상의 재생시간을 초 단위로 입력받아 몇 시간 몇 분 몇 초인지 출력하는 프로그램을 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.4.12

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int h_time(int second, int minute, int hour)
{
	return second / 3600;
}
int m_time(int second, int minute, int hour)
{
	return (second % 3600) / 60;

}
int s_time(int second, int minute, int hour)
{
	return second % 60;
}
void assignment0409(void)
{
	int second = 0;
	int minute = 0;
	int hour = 0;
	int s, m, h = 0;
	printf("재생시간(초)? ");
	scanf("%d", &second);
	s = s_time(second, minute, hour);
	m = m_time(second, minute, hour);
	h = h_time(second, minute, hour);
	printf("재생시간은 %d시간 %d분 %d초입니다.\n", h, m, s);
}
int main(void)
{
	assignment0409();

	return 0;
}