/* ���ϸ�: Assignmment_06.c

 * ����: ����Ʈ ������ ��������(m^2) ������ �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 1m^2�� 0.3025�� �ش��Ѵ�. 
         ���α׷��� �ۼ��� �� �̸� �ִ� ����� ����Ͻÿ�.      

 * �ۼ���: ������

 * ��¥: 2025.4.1

 * ����: v1.0

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
    printf("����Ʈ ����(��������)? ");
    scanf("%f", &m2);
    pyeong = py(m2);
    printf("%.2f �������� = %.2f ��", m2, pyeong);
}
int main(void)
{
    assignment0306();
 
    return 0;
}