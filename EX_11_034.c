/*
编程练习5
编写一个函数is_within()。它接受两个参数，一个是字符，另一个是字符串指针。其功能是如果字符在字符串中，
就返回一个非0值（真），如果字符不再字符串中，就返回0值（假）。在一个使用循环语句为这个函数提供输入的
完整程序中进行测试。
*/
#include <stdio.h>
#define SIZE 81
int is_within(char ch,const char *s);
int main(void)
{
    char str[SIZE];
    char ch;

    puts("Enter a string less than 80 characters:");
    while(gets(str) != NULL)
    {
        puts("Enter a char:");
        ch = getchar();
        while(getchar() != '\n')
            continue;
        if(is_within(ch, str))
            printf("%c is in the string %s\n", ch, str);
        else
            printf("%c isn't in the string %s\n", ch, str);

        puts("Enter a string less than 80 characters:");
    }

    return 0;
}
int is_within(char ch,const char *s)
{
    while(*s)
    {
        if(*s == ch)
            return 1;
        else
            s++;
    }

    return 0;
}
