/* ���ϸ�: Assignmment_08.c

 * ����: ���̸� �ߵ�(yard)�� �Է¹޾� ����(m)�� ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 1 yd�� 0.9144m�� �ش��Ѵ�.

 * �ۼ���: ������

 * ��¥: 2025.4.1

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int yd;
	double m;
	const double yard = 0.9144;

	printf("����(yd)? ");
	scanf("%d", &yd);

	m = yd * yard;

	printf("%d yd = %0.6f m", yd, m);

	return 0;
}