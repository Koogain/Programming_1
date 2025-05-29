#include <stdio.h>

#define MONTHS 12

// �Լ� ����
void inputFare(int fare[]);
void calculateStars(const int fare[], int stars[]);
void printGraph(const int fare[], const int stars[]);

int main(void) {
    int fare[MONTHS];
    int stars[MONTHS];

    inputFare(fare);                 // ��� �迭 �ʱ�ȭ
    calculateStars(fare, stars);    // �� ���� ���
    printGraph(fare, stars);        // ���

    return 0;
}

// ������ ������ ��� �ʱ�ȭ
void inputFare(int fare[]) {
    int fixed[MONTHS] = {
        10000, 12000, 8000, 15000, 9000, 11000,
        13000, 7000, 10000, 14000, 6000, 16000
    };

    for (int i = 0; i < MONTHS; i++) {
        fare[i] = fixed[i];
    }
}

// �� ���� ���
void calculateStars(const int fare[], int stars[]) {
    for (int i = 0; i < MONTHS; i++) {
        stars[i] = fare[i] / 2000;
    }
}

// �׷��� ���
void printGraph(const int fare[], const int stars[]) {
    printf("�� �ڵ��� ��� ���� �׷��� ��\n");
    for (int i = 0; i < MONTHS; i++) {
        printf("%2d�� %5d��: ", i + 1, fare[i]);
        for (int j = 0; j < stars[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}
