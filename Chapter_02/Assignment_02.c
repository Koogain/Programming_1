/* ���ϸ�: Assignmment_02.c

 * ����: �л��� ��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �л��� ��ȣ�� ������, ������ �Ǽ��� �Է¹޴´�.

 * �ۼ���: ������

 * ��¥: 2025.3.29

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number;

	printf("��ȣ? ");
	scanf("%d", &number);

	float grade;

	printf("����? ");
	scanf("%f", &grade);

	printf("%d�� �л��� ������ %f�Դϴ�.", number, grade);

	return 0;
}