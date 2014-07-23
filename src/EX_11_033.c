/*
编程练习4
设计并测试一个函数，其功能是搜索由函数的第一个参数指定的字符串，在其中查找由函数的第二个参数指定的字符
的第一次出现的位置。如果找到，返回指向这个字符的指针；如果没有找到，返回空字符（这种方式和strchr()函数
的功能一样）。在一个使用循环语句为这个函数提供输入的完整程序中进行测试。
*/
#include <stdio.h>
#define SIZE 81
char *str_chr(char *str, char ch);
int main(void)
{
    char str[SIZE];
    char ch;

    puts("Enter a line:");
    while(gets(str) != NULL)
    {
        puts(str);
        printf("Enter a character:\n");
        ch = getchar();
//        消除前面getchar()中行输入的多于影响。
        while(getchar() != '\n')
            continue;
//
        if( str_chr(str, ch))
            puts(str_chr(str, ch));
            //printf("%c\n", *str_chr(str, ch));
        else
            puts("Not found!");
        puts("Enter a new line:");
    }

    return 0;

}
char *str_chr(char *str, char ch)
{
    while( *str)
    {
        if (*str == ch)
            return (str);
        else
            str++;
    }
    return NULL;
}

