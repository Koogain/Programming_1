/* ���ϸ�: Assignmment_05.c

 * ����: ���ڷ� ���޹��� ������ ¦������ �˻��ϴ� is_even�Լ��� Ȧ������ �˻��ϴ� is_odd�Լ��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.05.12

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// even = ¦��, odd = Ȧ��

int is_even();
int is_odd();
void result();

int is_even(int num)
{
    return (num % 2 == 0);          // ¦������ Ȯ�� (¦���� 1, �ƴϸ� 0)
}

int is_odd(int num)
{
    return (num % 2 == 1);          // Ȧ������ Ȯ�� (Ȧ���� 1, �ƴϸ� 0)
}

void result()               // ��� ó��
{
    int num = 0;
    int even = 0, odd = 0;

    printf("������ ��ĭ���� �����ؼ� �Է��ϼ���. (�������� 0 �Է�)\n");

    do {
        scanf("%d", &num);

        if (num == 0)
            break;

        even += is_even(num);
        odd += is_odd(num);

    } while (1);

    printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d���Դϴ�.\n", even, odd);
}

int main(void)
{
    result();
    return 0;
}