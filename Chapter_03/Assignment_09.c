/* ���ϸ�: Assignmment_09.c

 * ����: ���Ը� �Ŀ��(lb)�� �Է¹޾� ų�α׷�(kg)���� ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 1lb�� 0.45359237kg�̴�.

 * �ۼ���: ������

 * ��¥: 2025.4.1

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int lb;
	double kg;

	printf("����(lb)? ");
	scanf("%d", &lb);

	kg = lb * 0.45359237;

	printf("%d lb = %lf kg\n", lb, kg);

	return 0;
}