/*
编程练习3
编写一个程序，把输入作为字符流读取，直到遇到EOF。
令其报告输入中的大写字母个数和小写字母个数。假设小写字母的数值是连续的，大写字母也是如此。或者你可以使用
ctype.h库中的合适的函数来区分大小写。
*/
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    int lower_count = 0;
    int upper_count = 0;

    while ( (ch = getchar()) != EOF )
    {
        if (islower(ch))
            lower_count++;
        if (isupper(ch))
            upper_count++;
    }

    printf("Ther are %d lower characters and %d upper characters.", lower_count, upper_count);

    return 0;

}
