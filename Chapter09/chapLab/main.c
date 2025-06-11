// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int test_strCopy();

int main()
{
	// printf("Hello, World!\n");
	// tsetStrlen();
	test_strCopy();
}

#define STR_SIZE 128
int test_strCopy()
{
	char str1[STR_SIZE] = "";
	char str2[STR_SIZE] = "";

	printf("ù��° ���ڿ� �Է�: ");
	scanf_s("%s", str1, STR_SIZE);
	printf("�ι�° ���ڿ� �Է�: ");
	scanf_s("%s", str2, STR_SIZE);

	printf("ù��°: %s �ι�°: %s�� �ԷµǾ����ϴ�.\n", str1, str2);

	str_swap(str1, str2, STR_SIZE);
	printf("%s %s�� ��ȯ�Ǿ�����?", str1, str2);

	return 0;
}

// ��ȯ�� �� ���ڿ� ������ �� ��ȯ
str_swap(char *str1, char *str2, int size)
{
	int result = 0;
	if (size <= 0 || str1 == NULL || str2 == NULL)
	{
		return 0;
	}

	char* temp = NULL;
	// void * malloc(int size);
	temp = (char*)malloc(sizeof(char) * size);
	// temp[0] = 'A';
	// char temp[size];
	if (temp == NULL)
	{
		return 0;
	}

	/*
	strncpy(temp, str1, size);
	strncpy(str1, str2, size);
	strncpy(str2, temp, size);
	*/

	strncpy_s(temp, size, str1, size);
	strncpy_s(str1, size, str2, size);
	strncpy_s(str2, size, temp, size);

	

	result = strlen(str1) + strlen(str2);

	free(temp);

	return result;
}

int tsetStrlen()
{
	char str1[] = "hello";
	char name[] = "������";

	size_t len = strlen(str1);

	// printf("%s�� ����: %d\n", str1, strlen(str1));
	printf("%s�� ����: %d\n", str1, len);

	len = strlen("�ȳ��ϼ���");

	printf("%s�� ����: %d\n", name, strlen(name));

	len = strlen("");
	printf("%s�� ����: %d\n", "", strlen(""));
	return 0;
}
