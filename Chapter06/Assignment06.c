/* 파일명: Assignmment_06.c

 * 내용: 다음과 같이 메뉴를 출력하고 선택된 메뉴 항목의 번호를 리턴하는 choose_menu함수를 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.05.12

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int choose_menu();
void output();

int main(void)
{
	output();
	return 0;
}

int choose_menu()
{
	int num;
	printf("[1.파일 열기  2.파일 저장  3.인쇄  4.종료] 선택? ");
	scanf("%d", &num);
	return num;
}
void output()
{
	int num;
	while (1)  // 무한 반복
	{
		num = choose_menu();  // 메뉴 선택

		if (num == 1)
			printf("파일 열기를 수행합니다.\n");
		else if (num == 2)
			printf("파일 저장을 수행합니다.\n");
		else if (num == 3)
			printf("인쇄를 수행합니다.\n");
		else if (num == 0)
		{
			printf("종료합니다.\n");
			break;
		}
		else
			printf("잘못된 항목입니다.\n");
	}
}