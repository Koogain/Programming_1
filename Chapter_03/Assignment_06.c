/* 파일명: Assignmment_06.c

 * 내용: 아파트 면적을 제곱미터(m^2) 단위로 입력받아 몇 평인지 출력하는 프로그램을 작성하시오. 1m^2는 0.3025평에 해당한다. 
         프로그램을 작성할 때 이름 있는 상수를 사용하시오.      

 * 작성자: 구가인

 * 날짜: 2025.4.1

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float py(float m2)
{
    return m2 * 0.3025;
}
void assignment0306(void)
{
    float m2 = 0;
    float pyeong = 0;
    printf("아파트 면적(제곱미터)? ");
    scanf("%f", &m2);
    pyeong = py(m2);
    printf("%.2f 제곱미터 = %.2f 평", m2, pyeong);
}
int main(void)
{
    assignment0306();
 
    return 0;
}