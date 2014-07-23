/*
编程练习5
编写一个函数，返回一个double数组中最大的和最小的数之间的差值，并在一个简单的程序中测试这个函数。
*/
#include <stdio.h>
#define SIZE 5
double diff(const double ar[], int n);
int main(void)
{
    double array[SIZE] = {-1.0, 0.0, 2.0, -2.3, 5.0};
    int i;

    for(i = 0; i< SIZE; i++)
        printf("a[%d] = %f\n", i, array[i]);
    printf("The diff between max and min is %f\n", diff(array, SIZE));

    return 0;
}

double diff(const double ar[], int n)
{
    int index;
    double max = 0.0;
    double min = 0.0;

    for ( index = 0; index < n; index ++ )
    {
        if (max < ar[index])
            max = ar[index];
        if (min > ar[index])
            min = ar[index];
    }

    return (max - min);
}
