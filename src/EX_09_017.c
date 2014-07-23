/*
编程练习2
设计函数chline(ch, i, j),实现指定字符在i列到j列的输出，并用一个简单的驱动程序测试该函数。
*/
#include <stdio.h>
void chline( char ch, int i, int j);
int main(void)
{
    char c;
    int m, n;

    printf("Enter the char you want and the cols.\nOne character two integers.\n");
    while( scanf("%c %d %d", &c, &m, &n) == 3)
    {

        chline(c, m, n);
        printf("Enter the char you want and the cols.\nOne character two integers.\n");
    }

    return 0;

}
void chline( char ch, int i, int j)
{
    int m;

    for( m = 0; m<i; m++)
        putchar(' ');
    for (m = i; m<j; m++)
        putchar(ch);
    putchar('\n');
}
