/* 파일명: Assignmment_09.c

 * 내용: red, green, blue를 인자로 전달해서 RGB색을 만들어 리턴하는 make_rgb함수를 정의하시오.

 * 작성자: 구가인

 * 날짜: 2025.05.12

 * 버전: v1.0

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

    printf("RGB 색상? ");
    scanf("%x", &rgb);  // 예: 0xff80 → 0x00FF80
    return rgb;
}
void output_rgb(unsigned int rgb)
{
    unsigned int comp_rgb = ~rgb & 0xFFFFFF;

    printf("RGB %06X의 보색: %06X\n", rgb, comp_rgb);  // 대문자 6자리 16진수 출력
}
int make_rgb(int red, int green, int blue) 
{
    return (red << 16) | (green << 8) | blue;
}

// 정수형 RGB에서 각 성분 추출
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

