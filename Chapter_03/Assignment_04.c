/* ���ϸ�: Assignmment_04.c

 * ����: ��ü�� �ۿ��� ���� ũ��� ���� �������� �̵��� �Ÿ��� �Է¹޾� �� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 
         ���� ũ��� N ������ �Է¹ް�, �̵��� �Ÿ��� m ������ �Է¹޴´�.

 * �ۼ���: ������

 * ��¥: 2025.4.1

 * ����: v1.0

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
    printf("��(N)? ");
    scanf("%d", &N);
    printf("�̵��Ÿ�(m)? ");
    scanf("%d", &M);
    J = J1(N, M);
    printf("�� �� : %.2f J\n", J);
}
int main(void)
{
    assignment0304();

    return 0;

}