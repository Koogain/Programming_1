/* ���ϸ�: Assignmment_18.c

 * ����: ���ڷ� ���޵� ������ ����� ���ؼ� ����ϴ� divisors�Լ��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.05.13

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomNum(void);
void divisors(int rnum);

int main(void)
{
	randomNum();		//����
	return 0;
}
void randomNum(void) 
{
	int i, j, cnt = 0;

	srand((unsigned int)time(NULL));		//���� �õ�(seed) �� ����

	for (i = 0; i < 3; i++) 
	{
		int rnum = rand() % 1000;
		divisors(rnum);
	}
}
void divisors(int rnum)		//��� ���ϱ� �� ���
{
	int i, cnt = 0;
	printf("%d�� ���: ", rnum);

	for (i = 1; i <= rnum; i++)
	{

		if (rnum % i == 0) {
			cnt++;
			printf("%d ", i);
		}
	}
	printf("=> �� %d��\n", cnt);
}