/* 파일명: Assignmment_13.c

 * 내용: 직사각형 정보를 나타내는 RECT 구조체를 정의하시오. 직사각형은 좌하단점과 우상단점으로
		 구성되며 점의 좌표는 POINT 구조체를 이용해서 나타난다. 직사각형 정보를 출력하는 print_rect 함수를 
		 정의하고, RECT 구조체 변수를 선언해서 직사각형 정보를 입력받고 출력하는 프로그램을 작정하시오.

 * 작성자: 구가인

 * 날짜: 2025.06.07

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // POINT 구조체 정의
struct POINT {
    int x;
    int y;
};

// RECT 구조체 정의
struct RECT {
    struct POINT lower_left;   // 좌하단점
    struct POINT upper_right;  // 우상단점
};

// 함수 프로토타입
struct RECT input_rect(void);
void print_rect(struct RECT r);

int main(void) {
    struct RECT r;

    r = input_rect();       // 입력
    print_rect(r);          // 출력

    return 0;
}

// 직사각형 좌표 입력 함수
struct RECT input_rect(void) {
    struct RECT r;

    printf("좌하단점 좌표 입력 (x y): ");
    scanf("%d %d", &r.lower_left.x, &r.lower_left.y);

    printf("우상단점 좌표 입력 (x y): ");
    scanf("%d %d", &r.upper_right.x, &r.upper_right.y);

    return r;
}

// 출력 함수
void print_rect(struct RECT r) {
    printf("[RECT 좌하단점: (%d, %d) 우상단점: (%d, %d)]\n",
        r.lower_left.x, r.lower_left.y,
        r.upper_right.x, r.upper_right.y);
}
