/* ���ϸ�: Assignmment_05.c

 * ����: ���̸� ��ġ(inch) �Է¹޾� ��Ƽ����(cm)�� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�. 1 inch�� 2.54cm�� �ش��Ѵ�.

 * �ۼ���: ������

 * ��¥: 2025.4.1

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	const float centimeter = 2.54;
	float inch, cm;

	printf("����(inch)? ");
	scanf("%f", &inch);

	cm = inch * 2.54;

	printf("%f inch = %f cm", inch, cm);

	return 0;

}