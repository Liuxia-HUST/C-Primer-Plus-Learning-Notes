/*
编程练习6
编写一个产生1000个1到10范围内的随机数的程序。
不必保存或打印数字，仅打印每个数被产生了多少次。让程序对10个不同的种子值进行计算。数字出现的次数相同吗？
可以使用本章中的函数或者ANSI C中的函数rand()和srand()，它们与我们的函数具有相同的形式。这是一个测试特定
随即谁发生器的随机性的方法。
*/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000
#define M 10

void count(int n, int a[]);

int main(void)
{
    int i, j;
    int arr[SIZE];
    int seed[M] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for ( i = 0; i < 10; i++)
    {
        srand(seed[i]);
        for(j = 0; j < SIZE; j++)
        {
            arr[j] =rand() % 10 + 1;
        }
        count(SIZE, arr);
    }

    return 0;
}

void count(int n, int a[])
{
    int ct[M];
    int err = 0;
    int i;

    for(i = 0; i < M; i++)
        ct[i] = 0;

    for(i = 0; i < n; i++)
    {
        switch(a[i])
        {
        case 1:
            ct[0]++;break;
        case 2:
            ct[1]++;break;
        case 3:
            ct[2]++;break;
        case 4:
            ct[3]++;break;
        case 5:
            ct[4]++;break;
        case 6:
            ct[5]++;break;
        case 7:
            ct[6]++;break;
        case 8:
            ct[7]++;break;
        case 9:
            ct[8]++;break;
        case 10:
            ct[9]++;break;
        default:
            err++;
            break;
        }
    }

    printf("1\t 2\t 3\t 4\t 5\t 6\t 7\t 8\t 9\t 10\t err\n");
    printf("%d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\n",
            ct[0], ct[1], ct[2], ct[3], ct[4], ct[5], ct[6], ct[7], ct[8], ct[9], err);
}
