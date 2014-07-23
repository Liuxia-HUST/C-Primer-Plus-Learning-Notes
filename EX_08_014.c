/*
编程练习6
修改程序8.8中的get_first()函数，使其返回所遇到的第一个非空白字符。在一个简单的程序中测试该函数。
*/
#include <stdio.h>
#include <ctype.h>
char get_first(void);
int main(void)
{
    char ch;

    printf("Enter some thing.\n");
    while (( ch = get_first()) != EOF )
        printf("The first char is %c\n", ch);

    return 0;
}
// *****************
char get_first(void)
{
    int ch;
    if ((ch = getchar()) == EOF)
        return EOF;
    else
    {
        while ( isspace(ch))  // 使用isblank总是出问题，因为isblank的本地实现里只包含了空格和tab
            ch = getchar(); // 一直读到非空字符

        while ( getchar() != '\n')
            continue;
        return ch;
    }
}

