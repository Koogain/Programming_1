/* ���ϸ�: Assignmment_02.c

 * ����: Visual Studio�� �̿��ؼ� ������ ���� C ���α׷��� �ۼ��ϰ�, ���� �� �����Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.3.29

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
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