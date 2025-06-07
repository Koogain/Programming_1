/* ���ϸ�: Assignmment_08.c

 * ����: Ŀ�Ǽ󿡼� �ǸŵǴ� ��ǰ ������ ��Ÿ���� PRODUCT ����ü�� �����Ͻÿ�.
		 �� ��ǰ���� ��ǰ��, ����, ��� ������ �� �־�� �Ѵ�.
		 PRODUCT ����ü�� �Ű������� ���޹޾� ��ǰ ������ ����ϴ� print_product �Լ��� �����Ͻÿ�.
		 PRODUCT ����ü ������ ������ ���� ��ǰ��, ����, ��� �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		 ����� ��ǰ���� ��ĭ ���� �� �ܾ�� �Է��Ѵ�.

 * �ۼ���: ������

 * ��¥: 2025.06.07

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NAME_LEN 50  // ��ǰ�� �ִ� ����

 // ����ü ����
struct PRODUCT {
    char name[NAME_LEN];
    int price;
    int stock;
};

// �Լ� ����
void print_product(struct PRODUCT p);

int main(void) {
    struct PRODUCT p;

    // ��ǰ ���� �Է�
    printf("��ǰ�� �Է� (���� ����): ");
    scanf("%s", p.name);

    printf("���� �Է�: ");
    scanf("%d", &p.price);

    printf("��� �Է�: ");
    scanf("%d", &p.stock);

    // ���
    print_product(p);

    return 0;
}

// ��ǰ ���� ��� �Լ� (��û�� ����)
void print_product(struct PRODUCT p) {
    printf("[%s %d�� ���: %d]\n", p.name, p.price, p.stock);
}
