/* ���ϸ�: Assignmment_14.c

 * ����: �⺻ ��ݰ� �� ��뷮(kWh)�� �Է¹޾Ƽ� ���� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.4.15

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ElectricBill(int basic, int usage, const int pay)
{
	return basic + usage * pay;
}
void assignment0414(void)
{
	int basic = 0, usage = 0;
	int result = 0;
	const int pay = 190;
	printf("�⺻ ���? ");
	scanf("%d", &basic);
	printf("�� ��뷮(kWh)? ");
	scanf("%d", &usage);
	result = ElectricBill(basic, usage, pay);
	printf("���� ���: %d��\n", result);
}
int main(void)
{
	assignment0414();
	return 0;
}