/* ���ϸ�: Assignmment_07.c

 * ����: �Ǽ����� �Է¹޾� �� ���� ������ �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �Ǽ����� �Է¹��� ���� 12.34ó�� �Ҽ� ǥ�� ����̳�
         1.234e+1ó�� ���� ǥ�� ����� �� �� ����� �� �ְ� �ϰ� ������ �������� ����� ���� ���� ǥ�� ������� ����Ͻÿ�.       

 * �ۼ���: ������

 * ��¥: 2025.4.1

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double sqare(double num)
{
    return num * num;
}
double cube(double num)
{
    return num * num * num;
}
void assignment0307(void)
{
    double num = 0;
    double sqare1 = 0;
    double cube1 = 0;
    printf("�Ǽ�? ");
    scanf("%lf", &num);
    sqare1 = sqare(num);
    cube1 = cube(num);
    printf("���� : %e\n", sqare1);
    printf("������ : %e\n", cube1);

}
int main(void)
{
    assignment0307();

    return 0;
}