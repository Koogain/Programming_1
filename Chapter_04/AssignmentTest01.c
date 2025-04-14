/* ���ϸ�: Assignmment_01.c

 * ����: Chapter04-01 ���� - ������ �ӷ��� �Է¹޾� ��������� ����ϴ� ���α׷�

 * �ۼ���: ������

 * ��¥: 2025.4.9

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0401(void);
double getMotionEnergy(double weight, double velocity); // mian �Լ� ���� ������Ÿ�� �Լ� ����

int main(void)
{
	assignment0401();

	return 0;
}

/*
    �Լ���: assginemt0401()
	���(å��): ����, �ӷ��� �Է¹���, ��������� ����ϵ��� �Լ�ȣ��, �� ����� �ֿܼ� ���
	�Է�: ����
	��ȯ: �����̸� 0�̸� ����, �� ���� ���� �����̴�.

 */
int assignment0401(void)
{
	// 1. ����, �ӵ� �Է¹޾� ����
	double weight = 0.0; // ����(kg)
	double velocity = 0.0; // �ӵ�(m/s)
	printf("���� �ӵ��� �Է����ּ���: ");
	scanf_s("%lf %lf", &weight, &velocity);

	// 2. ������� ���
	double result = getMotionEnergy(weight, velocity);

	// 3. ���� ������� ���
	printf(" ���� = %.2lf kg, �ӵ� = %.2lf m/s �� ��������� %.2f J �Դϴ�.\n", weight, velocity, result);

	return 0;
}

/*
    �Լ���: getMotionEnergy()
	���(å��): ����, �ӷ� �Է¹޾� ��������� ����Ͽ� ��ȯ
	�Է�: ����(kg), �ӷ�(m/s)
	��ȯ: �������
*/
double getMotionEnergy(double weight, double velocity)
{
	double energy = 0.0;

	// ������ = 1/2 * ���� * �ӵ� * �ӵ�
	energy = 1.0 / 2.0 * weight * velocity * velocity;

	return energy;
}