/* 파일명: Assignmment_01.c

 * 내용: 점의 좌표 (x, y)를 입력받아 스크린 상의 선택 영역 내의 점인지 검사하는 프로그램을 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.4.20

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0501(void)
{
	int left = 0, right = 0, top = 0, bottom = 0;
	int x, y;
	printf("선택 영역의 좌상단점 (left, top)? ");
	scanf("%d %d", &left, &top);
	printf("선택 영역의 우하단점 (right, bottom)? ");
	scanf("%d %d", &right, &bottom);
	printf("점의 좌표 (x, y)? ");
	scanf("%d %d", &x, &y);
	if (x >= left && x <= right && y <= bottom && y >= top)
	{
		printf("직사각형 모양의 선택 영역 내의 점입니다.\n");
	}
	else
	{
		printf("직사각형 모양의 선택 영역 외의 점입니다.\n");
	}
}
int main(void)
{
	assignment0501();

	return 0;
}