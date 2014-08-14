/*
编程练习5
编写产生100个1到10范围内的随机数的程序，并且以降序排序（可以将11章中的排序算法稍加改动来对整数进行排序。
这里，对数字本身进行排序即可）。
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

void sort(int n, double a[]);
void disp(int n, double a[]);

int main(void)
{
    int i;
    time_t t;

    double arr[SIZE];
    double tmp;

    srand((unsigned) time(&t)); // 设置随机数种子

    for(i = 0; i < SIZE; i++)
    {
        // 产生0~10之间的整数
        //arr[i] = rand()%10;
        tmp = (double)rand()  / RAND_MAX; // 0~1 之间的随机数
        arr[i] = 1 + tmp * 9;// 1 ~ 10之间的随机数
        //printf("%f \n", arr[i]);
    }
    puts("Before sorting:");
    disp(SIZE, arr);
    sort(SIZE, arr);
    puts("After sorting:");
    disp(SIZE, arr);

    return 0;
}

// sort
void sort(int n, double a[])
{
    int i, j;
    double tmp;
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if ( a[i] < a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }

    }

}

// display arrary
void disp(int n, double a[])
{
    int i;
    for (i = 0; i < n; i++ )
    {
        printf("%f \t", a[i]);
        if( (i +1) % 5 == 0 )
            putchar('\n');
    }
}
