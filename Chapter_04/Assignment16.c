/* ���ϸ�: Assignmment_16.c

 * ����: Chapter04-16 32��Ʈ �������� ������ ����Ʈ���� red, green, blue�� ������ 3�� �Է¹޾Ƽ� RGB ������ ����
					  ����ϴ� ���α׷��� �ۼ��Ͻÿ�.RGB ������ ����� ���� 16������ ����Ѵ�.

 * �ۼ���: ������

 * ��¥: 2025.4.12

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0416(void)
{
	int red, green, blue;
	int value;
	printf("red? ");
	scanf("%d", &red);
	red %= 256;

	printf("green? ");
	scanf("%d", &green);
	green %= 256;

	printf("blue? ");
	scanf("%d", &blue);
	blue %= 256;

	value = blue * 256 * 256;
	value += green * 256;
	value += red;

	printf("RGB Ʈ���÷�: %06X", value);
}
int  main(void)
{
	assignment0416();

	return 0;
}