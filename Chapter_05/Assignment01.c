/* ���ϸ�: Assignmment_01.c

 * ����: ���� ��ǥ (x, y)�� �Է¹޾� ��ũ�� ���� ���� ���� ���� ������ �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.4.20

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0501(void)
{
	int left = 0, right = 0, top = 0, bottom = 0;
	int x, y;
	printf("���� ������ �»���� (left, top)? ");
	scanf("%d %d", &left, &top);
	printf("���� ������ ���ϴ��� (right, bottom)? ");
	scanf("%d %d", &right, &bottom);
	printf("���� ��ǥ (x, y)? ");
	scanf("%d %d", &x, &y);
	if (x >= left && x <= right && y <= bottom && y >= top)
	{
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.\n");
	}
	else
	{
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.\n");
	}
}
int main(void)
{
	assignment0501();

	return 0;
}