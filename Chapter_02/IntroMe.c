/* 파일명: IntroMe.c

 * 내용: Visual Studio를 이용해서 다음과 같이 C 프로그램을 작성하고, 빌드 후 실행하시오.

 * 작성자: 구가인

 * 날짜: 2025.3.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void introMe(void);

int main()
{
	introMe();

		return 0;
}

void introMe(void)
{
	char name[62]; //이름 저장할 변수
	int age;	//나이 저장할 변수
	char hello[256]; //인사말 저장할 변수

		// 1. 이름, 나이, 인사말을 입력받는다.
		scanf("%s %d %s", name, &age, hello);

	// 2. 이름, 나이, 인사말을 출력한다.
	printf("이름 : %s 나이 : %d \\n 인사말 : %s",
		name, age, hello);

	return 0;
}