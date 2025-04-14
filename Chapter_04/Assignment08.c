/* ���ϸ�: Assignmment_08.c

 * ����: Chapter04-08 �������� ���̸� �Է¹޾� ���� ���Ǹ� ����ϴ� ���α׷�

 * �ۼ���: ������

 * ��¥: 2025.4.11

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double SphereVolume(double radius);
int assignment0408(void);

/*
	�Լ���: assginemt0408()
	���(å��): �������� �Է¹���, ���� ���Ǹ� ����ϵ��� �Լ�ȣ��, �� ����� �ֿܼ� ���
	�Է�: �������� �Է¹���
	��ȯ: �����̸� 0�̸� ����, �� ���� ���� �����̴�.

 */
int assignment0408(void)
{
	// 1. �������� �Է¹޾� ����
	double radius = 0; // ������(radius)
	printf("�������� ����? ");
	scanf_s("%lf", &radius);

	// 2. ������� ���
	double result = SphereVolume(radius);

	// 3. ���� ���� ���� ���
	printf("���� ����: %.6lf\n", result);

	return 0;
}

/*
	�Լ���: SphereVolume()
	���(å��): �������� �Է¹޾� ���	
	�Է�: ������(radius)
	��ȯ: �������
*/
double SphereVolume(double radius)
{
	double volume = 0.0;

	// ���� = 4/3 * pi * ������ * ������ * ������
	volume = (4.0 / 3.0) * 3.141592 * radius * radius * radius;

	return volume;
}

int main(void)
{
	assignment0408();

	return 0;
}