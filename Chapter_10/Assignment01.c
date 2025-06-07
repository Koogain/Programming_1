/* 파일명: Assignmment_01.c

 * 내용: 인터넷 사이트에 로그인할 때 사용되는 아이디와 패스워드를 관리하기 위한 LOGIN 구조체를 정의하시오.
		 아이디와 패스워드는 각각 최대 20글자까지 입력할 수 있다.
		 LOGIN 구조체 변수를 선언한 다음 아이디와 패스워드를 입력받아 저장하고 출력하는 프로그램을 작성하시오.
		 패스워드를 출력할 때는 패스워드의 내용은 보이지 않도록 패스워드 글자 수만큼 *을 대신 출력하시오.

 * 작성자: 구가인

 * 날짜: 2025.06.07

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_LEN 21  // 최대 20글자 + '\0'

 // LOGIN 구조체 정의 (main보다 위에 있어야 함)
struct LOGIN 
{
    char id[MAX_LEN];
    char password[MAX_LEN];
};

// 함수 원형 선언
void inputLogin(struct LOGIN* user);
void printMaskedPassword(const char* password);
void printLogin(const struct LOGIN* user);

// main 함수
int main(void) 
{
    struct LOGIN user;

    inputLogin(&user);
    printLogin(&user);

    return 0;
}

// 아이디와 패스워드를 입력받는 함수
void inputLogin(struct LOGIN* user) 
{
    printf("아이디 입력: ");
    scanf("%20s", user->id);

    printf("패스워드 입력: ");
    scanf("%20s", user->password);
}

// 패스워드를 *로 출력하는 함수
void printMaskedPassword(const char* password) 
{
    for (int i = 0; i < strlen(password); i++) 
    {
        printf("*");
    }
}

// 로그인 정보를 출력하는 함수
void printLogin(const struct LOGIN* user) 
{
    printf("\n[ 로그인 정보 출력 ]\n");
    printf("아이디: %s\n", user->id);
    printf("패스워드: ");
    printMaskedPassword(user->password);
    printf("\n");
}

