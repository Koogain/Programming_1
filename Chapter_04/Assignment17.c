/* 파일명: Assignmment_17.c

 * 내용: Chapter04-17 32비트 크기의 데이터에는  0-31번 비트가 존재, 7번째 비트만 1인 값, 15번째 비트만 1인 값,
					  23번쨔 비트만 1인 값, 31번째 비트만 1인 값을 구해서 16진수와 1-진수로 출력하는 프로그램을 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.4.12

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int BitValue(int n)
{
    return (1 << n); 
}

void assignment(void)
{
    int bit7 = BitValue(7);
    int bit15 = BitValue(15);
    int bit23 = BitValue(23);
    int bit31 = BitValue(31);

    printf("7번째 비트만 1인 값: %08X %d\n", bit7, bit7);

    printf("15번째 비트만 1인 값: %08X %d\n", bit15, bit15);

    printf("23번째 비트만 1인 값: %08X %d\n", bit23, bit23);

    printf("31번째 비트만 1인 값: %08X %d\n", bit31, bit31);

    return 0;
}
int main(void)
{
	assignment();

	return 0;
}