/*
编程练习1
设计一个程序，统计从输入到文件结尾为止的字符数。
*/
#include <stdio.h>
int main(void)
{
    int count =0;
    while( getchar() != EOF)
        count++;
    printf("%d characters inputed.", count);

    return 0;
}
