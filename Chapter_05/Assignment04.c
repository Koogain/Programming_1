/* ���ϸ�: Assignmment_04.c

 * ����: ������ �Է¹޾� �������� �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�.
 
 * �ۼ���: ������

 * ��¥: 2025.4.20

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0504(void)
{
	int year = 0;
	printf("����? ");
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("%d���� �����Դϴ�.\n", year);
	}
	else
	{
		printf("%d���� ������ �ƴմϴ�.\n", year);
	}
}
int main(void)
{
	assignment0504();

	return 0;
}