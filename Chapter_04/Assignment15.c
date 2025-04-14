/* 파일명: Assignmment_15.c

 * 내용: Chapter04-15 원-달러 매매기준율과 환전우대율(%)를 입력받아 달러를 살 떄 적용되는 화늉을 결정하고, 구입하고자 
                      하는 달러가 얼마인지 입력받아서 몇 원에 해당하는지 출력하는 프로그램을 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.4.12

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double ExchangeRate(double standard_per, double preference_per)
{
    return standard_per + (standard_per * 0.0175 * (1 - preference_per / 100.0));
}
double KRW(double E, double USD)
{
    return E * USD;
}
void assignment0415(void)
{
    double standard_per = 0;
    double preference_per = 0;
    double USD = 0;
    double E = 0, K = 0;

    printf("원/달러 매매기준율? ");
    scanf("%lf", &standard_per);

    printf("환율우대율(0~100)? ");
    scanf("%lf", &preference_per);

    E = ExchangeRate(standard_per, preference_per);
    printf("달러 살 때 환율은 %.6lf입니다.\n", E);

    printf("구입할 달러(USD)? ");
    scanf("%lf", &USD);

    K = KRW(E, USD);
    printf("USD %.2lf 살 때 ==> KRW %.2lf\n", USD, K);
}
int main(void)
{
    assignment0415();

    return 0;
}