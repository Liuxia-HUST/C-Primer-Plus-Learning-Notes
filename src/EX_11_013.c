// test.c -- 试用缩短字符串的函数
#include <stdio.h>
#include <string.h>
void fit (char *, unsigned int);

int main(void)
{
    char mesg[] = "Hold on to your hats, hackers. ";

    puts(mesg);
    fit(mesg, 7);
    puts(mesg);
    puts("Let's look at some more of the string. ");
    puts(mesg + 8);

    return 0;
}
void fit (char *string, unsigned int size)
{
    // 在数组的第8个元素放置一个'\0'来代替原有的空格字符。
    if (strlen(string) > size)
        * (string + size) = '\0';
}
