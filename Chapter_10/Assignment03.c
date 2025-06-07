/* 파일명: Assignmment_03.c

 * 내용: LOGIN 구조체 배열을 이용해서 로그인 과정을 프로그램으로 작성하시오.
		 아이디를 입력받아서 LOGIN 구조체 배열에서 아이디를 찾은 다음 입력받은 패스워드와 등록된 패스워드를 비교해서 같으면 "로그인 성공"이라고 출력한다.
		 LOGIN 구조체 배열은 크기가 5인 배열로 선언하고 적당한 값으로 초기화해서 사용한다.

 * 작성자: 구가인

 * 날짜: 2025.06.07

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_LEN 21
#define USER_COUNT 5

 // 구조체 정의
struct LOGIN {
    char id[MAX_LEN];
    char password[MAX_LEN];
};

// 함수 원형 선언
void inputCredentials(char* inputId, char* inputPw);
int login(struct LOGIN users[], int size, const char* inputId, const char* inputPw);
void printLoginResult(int result);
void runLoginProgram(void);  // 로그인 전체 흐름

int main(void) {
    runLoginProgram();  // main에서는 호출만
    return 0;
}

// 로그인 전체 흐름
void runLoginProgram(void) {
    struct LOGIN users[USER_COUNT] = {
        {"kookoo", "1111"},
        {"gaga", "2222"},
        {"inin", "3333"},
        {"cloud", "4444"},
        {"sky", "5555"}
    };

    char inputId[MAX_LEN];
    char inputPw[MAX_LEN];
    int result;

    do {
        inputCredentials(inputId, inputPw);
        result = login(users, USER_COUNT, inputId, inputPw);
        printLoginResult(result);
    } while (result != 1);  // 로그인 성공 전까지 반복
}

// 사용자 입력 함수
void inputCredentials(char* inputId, char* inputPw) {
    printf("아이디 입력: ");
    scanf("%20s", inputId);

    printf("패스워드 입력: ");
    scanf("%20s", inputPw);
}

// 로그인 검사 함수
int login(struct LOGIN users[], int size, const char* inputId, const char* inputPw) {
    for (int i = 0; i < size; i++) {
        if (strcmp(users[i].id, inputId) == 0) {
            if (strcmp(users[i].password, inputPw) == 0)
                return 1;  // 성공
            else
                return 0;  // 비밀번호 불일치
        }
    }
    return -1;  // 아이디 없음
}

// 결과 출력 함수
void printLoginResult(int result) {
    if (result == 1)
        printf("로그인 성공\n");
    else if (result == 0)
        printf("비밀번호가 일치하지 않습니다.\n\n");
    else
        printf("존재하지 않는 아이디입니다.\n\n");
}

