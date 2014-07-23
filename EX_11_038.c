/*
编程练习9
编写一个函数。其参数为一个字符串，删除字符串中的空格。在一个可以循环读取的程序中进行测试，
直到用户输入空行。对于任何输入字符串，函数都应该适用并可以显示结果。
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 81
void delete_space(char *s);
int main(void)
{
    char str[SIZE];

    puts("Enter something:(enter an empty line to quit.)");

    while( (strcmp(gets(str), "") )) // 比较输入字符串与空字符串，判断输入是否为空行.
    {
        delete_space(str);
        puts(str);

    }

    return 0;
}
void delete_space(char *s)
{
    int len = 0;
    int i, j;
    char *str;
    str = s;

    while(*str)
    {
        str++;
        len++;
    }
    // 从字符串尾部开始判断，遇到一个空白字符则将尾部的字符迁移一位
    for (i = len; i >= 0; i--)
    {
        if(isspace(*(s+i)))
            for ( j = 0; j < len - i + 1; j++)
                *(s + i + j) = *(s + i + j + 1);
    }
}
