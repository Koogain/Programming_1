/* ���ϸ�: Assignmment_10.c

 * ����: �װ��� ���� �� ������ �� �ҿ�ð��� �ð� ������ �Է¹޾Ƽ� ��ĥ �� �ð� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.4.15

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float d_time(int minute, int hour, int day)
{
	return (minute / 60) / 24;
}
float h_time(int minute, int hour, int day)
{
	return (minute / 60) % 24;
}
float m_time(int minute, int hour, int day)
{
	return minute % 60;
}
void assignment0410(void)
{
    double totalHours = 0;
    int days = 0, hours = 0, minutes = 0;
    printf("���� �ҿ� �ð�(�ð�)? ");
    scanf("%lf", &totalHours);

    days = (int)(totalHours / 24);
    hours = (int)((int)totalHours % 24);
    minutes = (int)((totalHours - (int)totalHours) * 60);

    printf("���� �ҿ� �ð��� %d�� %d�ð� %d���Դϴ�.\n", days, hours, minutes);
}
int main(void)
{
	assignment0410();
	return 0;
}