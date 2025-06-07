/* ���ϸ�: Assignmment_01.c

 * ����: ���ͳ� ����Ʈ�� �α����� �� ���Ǵ� ���̵�� �н����带 �����ϱ� ���� LOGIN ����ü�� �����Ͻÿ�.
		 ���̵�� �н������ ���� �ִ� 20���ڱ��� �Է��� �� �ִ�.
		 LOGIN ����ü ������ ������ ���� ���̵�� �н����带 �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		 �н����带 ����� ���� �н������� ������ ������ �ʵ��� �н����� ���� ����ŭ *�� ��� ����Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.06.07

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_LEN 21  // �ִ� 20���� + '\0'

 // LOGIN ����ü ���� (main���� ���� �־�� ��)
struct LOGIN 
{
    char id[MAX_LEN];
    char password[MAX_LEN];
};

// �Լ� ���� ����
void inputLogin(struct LOGIN* user);
void printMaskedPassword(const char* password);
void printLogin(const struct LOGIN* user);

// main �Լ�
int main(void) 
{
    struct LOGIN user;

    inputLogin(&user);
    printLogin(&user);

    return 0;
}

// ���̵�� �н����带 �Է¹޴� �Լ�
void inputLogin(struct LOGIN* user) 
{
    printf("���̵� �Է�: ");
    scanf("%20s", user->id);

    printf("�н����� �Է�: ");
    scanf("%20s", user->password);
}

// �н����带 *�� ����ϴ� �Լ�
void printMaskedPassword(const char* password) 
{
    for (int i = 0; i < strlen(password); i++) 
    {
        printf("*");
    }
}

// �α��� ������ ����ϴ� �Լ�
void printLogin(const struct LOGIN* user) 
{
    printf("\n[ �α��� ���� ��� ]\n");
    printf("���̵�: %s\n", user->id);
    printf("�н�����: ");
    printMaskedPassword(user->password);
    printf("\n");
}

