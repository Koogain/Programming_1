/* ���ϸ�: Assignmment_04.c

 * ����: ����� ������ ������ ������ ������ �Է¹޾� ����� �ۼ�Ʈ �󵵸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.4.15

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double concentration(int solvent, int solute)
{
	return (double)solute / (solvent + solute) * 100.0;
}
void assignment0404(void)
{
	int solvent = 0, solute = 0;
	double result = 0.0;
	printf("���(g)? ");
	scanf("%d", &solvent);
	printf("����(g)? ");
	scanf("%d", &solute);
	result = concentration(solvent, solute);
	printf("��: %.2lf %%\n", result);
}
int main(void)
{
	assignment0404();
	return 0;
}