#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int test_Copy();

int main()
{
	// printf("Hello, World!\n");
	// tsetStrlen();
	test_Copy();
}

#define STR_SIZE 128
int test_Copy()
{
	char str1[STR_SIZE] = "";
	char str2[STR_SIZE] = "";

	printf("�� ���ڿ� �Է�: ");
	scanf_s("%s %s", str1, STR_SIZE, str2, STR_SIZE);
	printf("%s %s �� �ԷµǾ����ϴ�.", str1, str2);

	char temp[STR_SIZE] = "";

	str_swap(str1, str2, STR_SIZE);
	printf("%s %s �� ��ȯ�Ǿ�����?", str1, str2);

	return 0;
}

// ��ȯ�� �� ���ڿ� ������ �� ��ȯ
str_swap(char * str1, char * str2, int size)
{
	int result = 0;

	char* temp = NULL;
	// void * malloc(int size);
	temp = (char*)malloc(sizeof(char) * size);
	// char temp[size];
	if (temp == NULL)
	{
		return 0;
	}

	strncpy(temp, str1, size);
	strcnpy(str1, str2, size);
	strcpny(str2, temp, size);

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
}
