// nono.c -- 不要效仿的程序
#include <stdio.h>
int main(void)
{
    char side_a[] = 'SIDE A';
    char dont[] = {'W', 'O', 'W', '!' };
    char side_b[] = 'SIDE B';

    puts(dont); // dont 不是一个字符串，只是一个字符数组。

    return 0;

}
