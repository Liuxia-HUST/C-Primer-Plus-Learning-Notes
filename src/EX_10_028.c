/*
编程练习9
编写一个函数，把两个数组内的相应元素相加，结果存储到第3个数组内。也就是说，如果数组1具有2、4、5、8，
数组2具有值1、0、4、6，则函数对数组复制为3、4、9、14.函数的参数包括3个数组名和数组大小。并在一个简单
的程序中测试这个函数。
*/
#include <stdio.h>
#define SIZE 4
void arrplus(int n,const double a1[],const double a2[],double tar_ar[]);
void displayArrary(const double array[], int n);
int main(void)
{
    double a1[SIZE] = {2, 4, 5, 8};
    double a2[SIZE] = {1, 0, 4, 6};
    double a3[SIZE];
    printf("The first arrary\n");

    displayArrary(a1, SIZE);
    printf("The second arrary\n");
    displayArrary(a2, SIZE);
    arrplus(SIZE, a1, a2, a3);

    printf("The sum of each elements of two arrays:\n");
    displayArrary(a3, SIZE);

    return 0;
}
// ******************************
void displayArrary(const double array[], int n)
{
    int i;
    for (i = 0; i < n; i ++)
    {
        printf("%.2f\t", array[i]);
    }
    printf("\n");
}
// ******************************
void arrplus(int n, const double a1[],const double a2[],double tar_ar[])
{
    int i;
    for (i = 0; i < n; i++)
        tar_ar[i] = a1[i] + a2[i];
}
