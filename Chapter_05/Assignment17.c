/* ���ϸ�: Assignmment_17.c

 * ����: ���� �ð��� ������ �Է¹޾Ƽ� ���� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.4.20

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignmen0517(void)
{
	int minute = 0, price_type = 0, price =0;
	printf("���� �ð�(��)? ");
	scanf("%d", &minute);

	price_type = (minute + 9) / 10;  // 10�� ������ �ø�

    if (price_type <= 3)
    {
        price = price_type * 1000;  // 30�� ����
    }
    else if (price_type < 24)
    {
        price = 2000 + (price_type - 3) * 1000;  // 30�� �ʰ� ~ 4�ð� �̸�
    }
    else
    {
        price = 25000;  // �Ϸ� �ִ� ���
    }

	printf("���� ���: %d\n", price);

}
int main(void)
{
	assignmen0517();

	return 0;
}