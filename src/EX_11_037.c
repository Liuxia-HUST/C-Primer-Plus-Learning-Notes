/*
编程练习8
编写一个函数。其功能是使输入字符串反序。在一个使用循环语句为这个函数提供输入的完整程序中进行测试。
*/
#include <stdio.h>
#include <string.h>
#define SIZE 81
void invers_string(char *s);
int main(void)
{
    char str[SIZE];

    puts("Enter something:(enter an empty line to quit.)");

    while( (strcmp(gets(str), "") )) // 比较输入字符串与空字符串，判断输入是否为空行
    {
        invers_string(str);
        puts(str);
        puts("Enter something:(enter an empty line to quit.)");

    }

    return 0;
}
void invers_string(char *s)
{
    int len = 0;
    int i;
    char *str;
    char tmp;
    str = s;


    while(*str)
    {
        str++;
        len++;
    }

    for (i = 0; i < len/2; i++ )
    {
        tmp = *(s + i);
        *(s + i) = * (s + len - i - 1);
        * (s + len - i - 1) = tmp;
    }
}
