/* ���ϸ�: Assignmment_17.c

 * ����: Chapter04-17 32��Ʈ ũ���� �����Ϳ���  0-31�� ��Ʈ�� ����, 7��° ��Ʈ�� 1�� ��, 15��° ��Ʈ�� 1�� ��,
					  23��¹ ��Ʈ�� 1�� ��, 31��° ��Ʈ�� 1�� ���� ���ؼ� 16������ 1-������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.4.12

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int BitValue(int n)
{
    return (1 << n); 
}

void assignment(void)
{
    int bit7 = BitValue(7);
    int bit15 = BitValue(15);
    int bit23 = BitValue(23);
    int bit31 = BitValue(31);

    printf("7��° ��Ʈ�� 1�� ��: %08X %d\n", bit7, bit7);

    printf("15��° ��Ʈ�� 1�� ��: %08X %d\n", bit15, bit15);

    printf("23��° ��Ʈ�� 1�� ��: %08X %d\n", bit23, bit23);

    printf("31��° ��Ʈ�� 1�� ��: %08X %d\n", bit31, bit31);

    return 0;
}
int main(void)
{
	assignment();

	return 0;
}