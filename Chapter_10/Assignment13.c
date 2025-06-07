/* ���ϸ�: Assignmment_13.c

 * ����: ���簢�� ������ ��Ÿ���� RECT ����ü�� �����Ͻÿ�. ���簢���� ���ϴ����� ����������
		 �����Ǹ� ���� ��ǥ�� POINT ����ü�� �̿��ؼ� ��Ÿ����. ���簢�� ������ ����ϴ� print_rect �Լ��� 
		 �����ϰ�, RECT ����ü ������ �����ؼ� ���簢�� ������ �Է¹ް� ����ϴ� ���α׷��� �����Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.06.07

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // POINT ����ü ����
struct POINT {
    int x;
    int y;
};

// RECT ����ü ����
struct RECT {
    struct POINT lower_left;   // ���ϴ���
    struct POINT upper_right;  // ������
};

// �Լ� ������Ÿ��
struct RECT input_rect(void);
void print_rect(struct RECT r);

int main(void) {
    struct RECT r;

    r = input_rect();       // �Է�
    print_rect(r);          // ���

    return 0;
}

// ���簢�� ��ǥ �Է� �Լ�
struct RECT input_rect(void) {
    struct RECT r;

    printf("���ϴ��� ��ǥ �Է� (x y): ");
    scanf("%d %d", &r.lower_left.x, &r.lower_left.y);

    printf("������ ��ǥ �Է� (x y): ");
    scanf("%d %d", &r.upper_right.x, &r.upper_right.y);

    return r;
}

// ��� �Լ�
void print_rect(struct RECT r) {
    printf("[RECT ���ϴ���: (%d, %d) ������: (%d, %d)]\n",
        r.lower_left.x, r.lower_left.y,
        r.upper_right.x, r.upper_right.y);
}
