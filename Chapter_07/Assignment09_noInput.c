#include <stdio.h>

#define MONTHS 12

// 함수 선언
void inputFare(int fare[]);
void calculateStars(const int fare[], int stars[]);
void printGraph(const int fare[], const int stars[]);

int main(void) {
    int fare[MONTHS];
    int stars[MONTHS];

    inputFare(fare);                 // 요금 배열 초기화
    calculateStars(fare, stars);    // 별 개수 계산
    printGraph(fare, stars);        // 출력

    return 0;
}

// 정해진 값으로 요금 초기화
void inputFare(int fare[]) {
    int fixed[MONTHS] = {
        10000, 12000, 8000, 15000, 9000, 11000,
        13000, 7000, 10000, 14000, 6000, 16000
    };

    for (int i = 0; i < MONTHS; i++) {
        fare[i] = fixed[i];
    }
}

// 별 개수 계산
void calculateStars(const int fare[], int stars[]) {
    for (int i = 0; i < MONTHS; i++) {
        stars[i] = fare[i] / 2000;
    }
}

// 그래프 출력
void printGraph(const int fare[], const int stars[]) {
    printf("★ 핸드폰 요금 막대 그래프 ★\n");
    for (int i = 0; i < MONTHS; i++) {
        printf("%2d월 %5d원: ", i + 1, fare[i]);
        for (int j = 0; j < stars[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}
