/* ���ϸ�: Assignmment_02.c

 * ����: ������ ���̿� ������ ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.4.1

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int area(int width, int length)
{
	return width * length;
}
int perimeter(int width, int length)
{
	return 2 * (width + length);
}
void assignment0302(void)
{
	int width = 0;
	int length = 0;
	int area1 = 0;
	int perimeter1 = 0;
	printf("������ ����? ");
	scanf("%d", &width);
	printf("������ ����? ");
	scanf("%d", &length);
	area1 = area(width, length);
	perimeter1 = perimeter(width, length);
	printf("���簢���� ���� : %d\n", area1);
	printf("���簢���� �ѷ� : %d\n", perimeter1);
}
int main(void)
{
	assignment0302();
	return 0;
}