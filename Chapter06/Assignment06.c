/* ���ϸ�: Assignmment_06.c

 * ����: ������ ���� �޴��� ����ϰ� ���õ� �޴� �׸��� ��ȣ�� �����ϴ� choose_menu�Լ��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.05.12

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int choose_menu();
void output();

int main(void)
{
	output();
	return 0;
}

int choose_menu()
{
	int num;
	printf("[1.���� ����  2.���� ����  3.�μ�  4.����] ����? ");
	scanf("%d", &num);
	return num;
}
void output()
{
	int num;
	while (1)  // ���� �ݺ�
	{
		num = choose_menu();  // �޴� ����

		if (num == 1)
			printf("���� ���⸦ �����մϴ�.\n");
		else if (num == 2)
			printf("���� ������ �����մϴ�.\n");
		else if (num == 3)
			printf("�μ⸦ �����մϴ�.\n");
		else if (num == 0)
		{
			printf("�����մϴ�.\n");
			break;
		}
		else
			printf("�߸��� �׸��Դϴ�.\n");
	}
}