/* ���ϸ�: Assignmment_03.c

 * ����: ������ ���̸� �Է¹޾� ��ġ�������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ������ kg ����, ���̴� m ������ �Է¹޴´�.

 * �ۼ���: ������

 * ��¥: 2025.4.1

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double calcPositionEnergy1(int weight, int height)
{
	return weight * height * 9.8;
}
void assignment0303(void)
{
	double calcPositionEnergy = 9.8;
	double g;
	int weight = 0;
	int height = 0;
	printf("����(kg)? ");
	scanf("%d", &weight);
	printf("����(m)? ");
	scanf("%d", &height);
	g = calcPositionEnergy1(weight, height);
	printf("��ġ������ : %f J\n", g);
}
int main(void)
{
	assignment0303();

	return 0;
}