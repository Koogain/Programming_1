/* ���ϸ�: Assignmment_16.c

 * ����: Chapter04-16 32��Ʈ �������� ������ ����Ʈ���� red, green, blue�� ������ 3�� �Է¹޾Ƽ� RGB ������ ����
					  ����ϴ� ���α׷��� �ۼ��Ͻÿ�.RGB ������ ����� ���� 16������ ����Ѵ�.

 * �ۼ���: ������

 * ��¥: 2025.4.12

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int truecolor(int r, int g, int b)
{
	return (r & 0xFF) | ((g & 0xFF) << 8) | ((b & 0xFF) << 16);
}
void assignment0416(void)
{
	unsigned int r = 0, g = 0, b = 0;
	int color = 0;
	printf("red? ");
	scanf("%d", &r);
	printf("green? ");
	scanf("%d", &g);
	printf("blue? ");
	scanf("%d", &b);
	color = truecolor(r, g, b);
	printf("RGB Ʈ�� �÷�: %06X\n", color);
}
int  main(void)
{
	assignment0416();

	return 0;
}