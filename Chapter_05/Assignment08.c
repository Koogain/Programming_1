/* ���ϸ�: Assignmment_08.c

 * ����: ��Ʈ ������ �����ϴ� ���⸦ ���α׷��Ͻÿ�.
 
 * �ۼ���: ������

 * ��¥: 2025.4.20

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0508(void)
{
	int a = 0, b = 0;
	char op = 0;
	int result = 0;
	printf("��Ʈ �����? ");
	scanf("%i %c %i", &a, &op, &b);  
	switch (op)
	{
	case '&':
		result = a & b;
		break;
	case '|':
		result = a | b;
		break;
	case '^':
		result = a ^ b;
		break;
	default:
		printf("�߸��� �������Դϴ�.\n");
		return;
	}
	printf("%X %c %X = %X\n", a, op, b, result);
}
int main(void)
{
	assignment0508();

	return 0;
}