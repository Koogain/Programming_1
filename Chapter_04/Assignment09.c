/* ���ϸ�: Assignmment_09.c

 * ����: Chapter04-09 �������� ����ð��� �� ������ �Է¹޾� �� �ð� �� �� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.4.12

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int h_time(int second, int minute, int hour)
{
	return second / 3600;
}
int m_time(int second, int minute, int hour)
{
	return (second % 3600) / 60;

}
int s_time(int second, int minute, int hour)
{
	return second % 60;
}
void assignment0409(void)
{
	int second = 0;
	int minute = 0;
	int hour = 0;
	int s, m, h = 0;
	printf("����ð�(��)? ");
	scanf("%d", &second);
	s = s_time(second, minute, hour);
	m = m_time(second, minute, hour);
	h = h_time(second, minute, hour);
	printf("����ð��� %d�ð� %d�� %d���Դϴ�.\n", h, m, s);
}
int main(void)
{
	assignment0409();

	return 0;
}