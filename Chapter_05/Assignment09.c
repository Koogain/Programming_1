/* ���ϸ�: Assignmment_09.c

 * ����: �ܹ��� ������ ��꼭 ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.4.20

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define burger_price 4000
#define potato_price 2000
#define coke_price 1500
#define set_price 6500

void assignment0509(void)
{
	int burger = 0, potato = 0, coke = 0, set = 0;
	int total = 0;
	printf("[�ܹ��� 4000��, ����Ƣ�� 2000��, �ݶ� 1500��, ��Ʈ 6500��]\n");

	printf("�ܹ��� ����? ");
	scanf("%d", &burger);
	printf("����Ƣ�� ����? ");
	scanf("%d", &potato);
	printf("�ݶ� ����? ");
	scanf("%d", &coke);

	printf("\n");

	// ���� ���� ������
	int burger_single = burger;
	int potato_single = potato;
	int coke_single = coke;

	// ��Ʈ ���� ���
	while (burger_single > 0 && potato_single > 0 && coke_single > 0)
	{
		burger_single--;
		potato_single--;
		coke_single--;
		set++;
	}

	// ���� ��ǰ ���� ���
	burger_single = burger - set;
	potato_single = potato - set;
	coke_single = coke - set;

	// �հ� ���
	total = (set * set_price) +
		(burger_single * burger_price) +
		(potato_single * potato_price) +
		(coke_single * coke_price);

	while (1)
	{
		if (burger > 0 && potato > 0 && coke > 0)
		{
			burger--;
			potato--;
			coke--;

			set++;
		}
		else
		{
			total += set * set_price;
			total += burger * burger_price;
			total += potato * potato_price;
			total += coke * coke_price;
			break;
		}
	}

	printf("��ǰ��      �ܰ�   ����   �ݾ�\n");
	printf("��Ʈ        %4d   %3d  %6d\n", set_price, set, set * set_price);
	printf("�ܹ���      %4d   %3d  %6d\n", burger_price, burger, burger * burger_price);
	printf("����Ƣ��    %4d   %3d  %6d\n", potato_price, potato, potato * potato_price);
	printf("------------------------------\n");
	printf("�հ�                   %7d", total);

}
int main(void)
{
	assignment0509();

	return 0;
}