// some_data.c -- 部分初始化的数组
// 部分初始化后，未初始化的元素设置为0；
#include <stdio.h>
#define SIZE 4
int main(void)
{
    int no_data[SIZE] = {1492 , 1066}; // 部分初始化的数组
    int i;

    printf("%2s%14s\n", "i", "no_data[i] ");
    for ( i = 0; i < SIZE; i++)
    {
        printf("%2d%14d\n", i, no_data[i]);
    }


    return 0;
}

