/* 파일명: Assignmment_08.c

 * 내용: 커피숍에서 판매되는 제품 정보를 나타내는 PRODUCT 구조체를 정의하시오.
		 각 제품별로 제품명, 가격, 재고를 저장할 수 있어야 한다.
		 PRODUCT 구조체를 매개변수로 전달받아 제품 정보를 출력하는 print_product 함수를 정의하시오.
		 PRODUCT 구조체 변수를 선언한 다음 제품명, 가격, 재고를 입력받아 저장하고 출력하는 프로그램을 작성하시오.
		 참고로 제품명은 빈칸 없는 한 단어로 입력한다.

 * 작성자: 구가인

 * 날짜: 2025.06.07

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NAME_LEN 50  // 제품명 최대 길이

 // 구조체 정의
struct PRODUCT {
    char name[NAME_LEN];
    int price;
    int stock;
};

// 함수 선언
void print_product(struct PRODUCT p);

int main(void) {
    struct PRODUCT p;

    // 제품 정보 입력
    printf("제품명 입력 (공백 없이): ");
    scanf("%s", p.name);

    printf("가격 입력: ");
    scanf("%d", &p.price);

    printf("재고 입력: ");
    scanf("%d", &p.stock);

    // 출력
    print_product(p);

    return 0;
}

// 제품 정보 출력 함수 (요청한 형식)
void print_product(struct PRODUCT p) {
    printf("[%s %d원 재고: %d]\n", p.name, p.price, p.stock);
}
