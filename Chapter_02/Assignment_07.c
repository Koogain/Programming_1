/* ���ϸ�: Assignmment_07.c

 * ����: Ŀ�� ������(S, T, G)�� �ֹ� ������ �Է¹޾� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. Ŀ�� ������� S, T, G �� ����
 *       ���� �� �ϳ��� �Է¹޴´�.

 * �ۼ���: ������

 * ��¥: 2025.3.29

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char size;
	int number;


	printf("Ŀ�� ������(S, T, G)�� �ֹ� ����? ");
	scanf("%c %d", &size, &number);

	printf("%c ������ %d���� �ֹ��մϴ�.\n ", size, number);

	return 0;

}