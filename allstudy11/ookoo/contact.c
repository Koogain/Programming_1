#include <stdio.h>
#include <string.h> // " "헤더파일보다 < >헤더파일이 위로 오게 한다.
#include "contact.h"

// isEqualContact()
// 반환값 : 만약 같으면 1 (true) 반환, 그렇지 않으면 0을 반환
// 입력 : 두 Comtact 값
int isEqualContact(Contact a, Contact b)
{
	if (a.year == b.year && a.gender == b.gender &&
		strcmp(a.name, b.name) == 0 &&
		strcmp(a.phone, b.phone) == 0)
		return 1;
	else
		return 0;
}

void printContact(Contact ct)
{
	// 이름: 000
	// 전번: 00000000000
	// 성별: 남 혹 여
	// 연도: 0000
	printf("이름: %s \n", ct.name);
	printf("전번: %s \n", ct.phone);
	printf("성별: %s \n", ct.gender == MAN ? "남자" : "여자");
	printf("연도: %d \n", ct.year);
}