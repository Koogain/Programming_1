/* ���ϸ�: Assignmment_19.c

 * ����: ��ġ �����Ϳ� �������� ���ڷ� �޾� �׷����� ����ϴ� graph�Լ��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.05.13

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)		//main�Լ�
{
	randNum();
	return 0;
}
void randNum()			// 0~9999 ������ ���� ����
{
	int i, rnum;
	srand((unsigned int)time(NULL));

	for (i = 0; i < 3; i++) 
	{
		rnum = rand() % 10000;
		printf("%d:", rnum);
		graph(rnum);
		printf("\n");
	}

}
void graph(int rnum)		// ������ 100���� �� ���
{
	int i;

	for (i = 0; i < rnum / 100; i++)
	{
		printf("*");
	}
}