/* 파일명: Assignmment_05.c

 * 내용: 인자로 전달받은 정수가 짝수인지 검사하는 is_even함수와 홀수인지 검사하는 is_odd함수를 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.05.12

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// even = 짝수, odd = 홀수

int is_even();
int is_odd();
void result();

int is_even(int num)
{
    return (num % 2 == 0);          // 짝수인지 확인 (짝수면 1, 아니면 0)
}

int is_odd(int num)
{
    return (num % 2 == 1);          // 홀수인지 확인 (홀수면 1, 아니면 0)
}

void result()               // 결과 처리
{
    int num = 0;
    int even = 0, odd = 0;

    printf("정수를 빈칸으로 구분해서 입력하세요. (마지막에 0 입력)\n");

    do {
        scanf("%d", &num);

        if (num == 0)
            break;

        even += is_even(num);
        odd += is_odd(num);

    } while (1);

    printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.\n", even, odd);
}

int main(void)
{
    result();
    return 0;
}