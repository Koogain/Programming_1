/* ���ϸ�: Assignmment_05.c

 * ����: �µ��� �Է¹޾� ���� �µ��� ȭ�� �µ���, ȭ�� �µ��� ���� �µ��� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.4.20

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0505(void)
{
	char unit;
	double input = 0.0, result = 0.0;

	printf("�µ�? ");
	scanf("%lf %c", &input, &unit);  

	if (unit == 'C' || unit == 'c')
	{
		result = input * 9.0 / 5.0 + 32.0;  // C �� F
		printf("%.2lf C ==> %.2lf F\n", input, result);
	}
	else if (unit == 'F' || unit == 'f')
	{
		result = (input - 32.0) * 5.0 / 9.0;  // F �� C
		printf("%.2lf F ==> %.2lf C\n", input, result);
	}
	else
	{
		printf("�߸��� �����Դϴ�.\n");
		return;
	}
}
int main(void)
{
	assignment0505();

	return 0;
}