/* ���ϸ�: Assignmment_12.c

 * ����: ������̼� �ۿ��� �̵� �Ÿ��� ���� �ӷ����� ���� ���� �ð��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.4.15

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ArrivalTimeInMinutes(double distance, double speed)
{
	return (int) (distance / speed * 60);
}
void assignment0412(void)
{
    double distance = 0, speed = 0;
    int totalMinutes = 0;

    printf("�̵� �Ÿ�(km)? ");
    scanf("%lf", &distance);

    printf("���� �ӷ�(km/h)? ");
    scanf("%lf", &speed);

    totalMinutes = ArrivalTimeInMinutes(distance, speed);

    printf("�������� ���� �ð��� �� %d���Դϴ�.\n", totalMinutes);
}
int main(void)
{
	assignment0412();
	return 0;
}