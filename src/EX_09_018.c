/*
编程练习3
编写一个函数。函数的3个参数是一个字符和两个整数。字符参数是需要输出的字符。
第一个整数说明了在每行中该字符输出的个数，而第二个整数指出的是需要输出的行数。
编写一个调用该函数的程序。
*/
#include <stdio.h>
void chprint( char ch, int i, int j);
int main(void)
{
    char ch;
    int intVal1, intVal2;

    printf("Enter a char and two integers:\n");
    while ( scanf("%c %d %d", &ch, &intVal1, &intVal2) != 3);
    {
        chprint(ch, intVal1, intVal2);
    }

    return 0;
}

void chprint( char ch, int i, int j)
{
    int m, n;
    for (m = 0; m < j; m++)
    {
        for (n = 0; n < i; n++)
            putchar(ch);
        putchar('\n');
    }
}
