/* ���ϸ�: Assignmment_15.c

 * ����: Chapter04-15 ��-�޷� �Ÿű������� ȯ�������(%)�� �Է¹޾� �޷��� �� �� ����Ǵ� ȭ���� �����ϰ�, �����ϰ��� 
                      �ϴ� �޷��� ������ �Է¹޾Ƽ� �� ���� �ش��ϴ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.4.12

 * ����: v1.0

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

    printf("��/�޷� �Ÿű�����? ");
    scanf("%lf", &standard_per);

    printf("ȯ�������(0~100)? ");
    scanf("%lf", &preference_per);

    E = ExchangeRate(standard_per, preference_per);
    printf("�޷� �� �� ȯ���� %.6lf�Դϴ�.\n", E);

    printf("������ �޷�(USD)? ");
    scanf("%lf", &USD);

    K = KRW(E, USD);
    printf("USD %.2lf �� �� ==> KRW %.2lf\n", USD, K);
}
int main(void)
{
    assignment0415();

    return 0;
}