/* ���ϸ�: Assignmment_09.c

 * ����: red, green, blue�� ���ڷ� �����ؼ� RGB���� ����� �����ϴ� make_rgb�Լ��� �����Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.05.12

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int input_rgb();
void output_rgb(unsigned int rgb);
int make_rgb(int red, int green, int blue);
int get_red(int rgb);
int get_green(int rgb);
int get_blue(int rgb);

int main(void) 
{
    unsigned int rgb = input_rgb();
    output_rgb(rgb);
    return 0;
}
int input_rgb()
{
    unsigned int rgb;

    printf("RGB ����? ");
    scanf("%x", &rgb);  // ��: 0xff80 �� 0x00FF80
    return rgb;
}
void output_rgb(unsigned int rgb)
{
    unsigned int comp_rgb = ~rgb & 0xFFFFFF;

    printf("RGB %06X�� ����: %06X\n", rgb, comp_rgb);  // �빮�� 6�ڸ� 16���� ���
}
int make_rgb(int red, int green, int blue) 
{
    return (red << 16) | (green << 8) | blue;
}

// ������ RGB���� �� ���� ����
int get_red(int rgb) 
{
    return (rgb >> 16) & 0xFF;
}
int get_green(int rgb)
{
    return (rgb >> 8) & 0xFF;
}
int get_blue(int rgb) 
{
    return rgb & 0xFF;
}

