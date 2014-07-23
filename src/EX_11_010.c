// put1.c -- 不添加换行符打印一个字符串
#include <stdio.h>
void put1 (const char * string);
void put2 (const char * string);
int main(void)
{
    char ch[] = "Hello world!";
    put1(ch);// 不打印换行符
    putchar('\n');
    put2(ch);// 不打印换行符
    putchar('\n');
    puts(ch); // 打印换行符


    return 0;
}
void put1(const char * string)
{
    while (*string != '\0')
        putchar(*string++);
}
void put2 (const char * string)
{
    while (*string)
        putchar(*string++);
}
