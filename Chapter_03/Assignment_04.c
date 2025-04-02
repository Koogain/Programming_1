/* 파일명: Assignmment_04.c

 * 내용: 물체에 작용한 힘의 크기와 힘의 방향으로 이동한 거리를 입력받아 한 일을 양을 구하는 프로그램을 작성하시오. 
         힘의 크기는 N 단위로 입력받고, 이동한 거리는 m 단위로 입력받는다.

 * 작성자: 구가인

 * 날짜: 2025.4.1

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float J1(int N, int M)
{
    return N * M;
}
void assignment0304(void)
{
    int N = 0;
    int M = 0;
    float J = 0;
    printf("힘(N)? ");
    scanf("%d", &N);
    printf("이동거리(m)? ");
    scanf("%d", &M);
    J = J1(N, M);
    printf("한 일 : %.2f J\n", J);
}
int main(void)
{
    assignment0304();

    return 0;

}