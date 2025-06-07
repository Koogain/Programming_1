/* ���ϸ�: Assignmment_03.c

 * ����: LOGIN ����ü �迭�� �̿��ؼ� �α��� ������ ���α׷����� �ۼ��Ͻÿ�.
		 ���̵� �Է¹޾Ƽ� LOGIN ����ü �迭���� ���̵� ã�� ���� �Է¹��� �н������ ��ϵ� �н����带 ���ؼ� ������ "�α��� ����"�̶�� ����Ѵ�.
		 LOGIN ����ü �迭�� ũ�Ⱑ 5�� �迭�� �����ϰ� ������ ������ �ʱ�ȭ�ؼ� ����Ѵ�.

 * �ۼ���: ������

 * ��¥: 2025.06.07

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_LEN 21
#define USER_COUNT 5

 // ����ü ����
struct LOGIN {
    char id[MAX_LEN];
    char password[MAX_LEN];
};

// �Լ� ���� ����
void inputCredentials(char* inputId, char* inputPw);
int login(struct LOGIN users[], int size, const char* inputId, const char* inputPw);
void printLoginResult(int result);
void runLoginProgram(void);  // �α��� ��ü �帧

int main(void) {
    runLoginProgram();  // main������ ȣ�⸸
    return 0;
}

// �α��� ��ü �帧
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
    } while (result != 1);  // �α��� ���� ������ �ݺ�
}

// ����� �Է� �Լ�
void inputCredentials(char* inputId, char* inputPw) {
    printf("���̵� �Է�: ");
    scanf("%20s", inputId);

    printf("�н����� �Է�: ");
    scanf("%20s", inputPw);
}

// �α��� �˻� �Լ�
int login(struct LOGIN users[], int size, const char* inputId, const char* inputPw) {
    for (int i = 0; i < size; i++) {
        if (strcmp(users[i].id, inputId) == 0) {
            if (strcmp(users[i].password, inputPw) == 0)
                return 1;  // ����
            else
                return 0;  // ��й�ȣ ����ġ
        }
    }
    return -1;  // ���̵� ����
}

// ��� ��� �Լ�
void printLoginResult(int result) {
    if (result == 1)
        printf("�α��� ����\n");
    else if (result == 0)
        printf("��й�ȣ�� ��ġ���� �ʽ��ϴ�.\n\n");
    else
        printf("�������� �ʴ� ���̵��Դϴ�.\n\n");
}

