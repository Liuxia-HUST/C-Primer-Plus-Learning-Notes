/*
编程练习3
编写一个函数，返回一个int数组中存储的最大数值，并在一个简单的程序中测试这个函数。
*/
#include <stdio.h>
#define SIZE 5
int maxEle(const int ar[], int n);
int main(void)
{
    int array[SIZE] = {6, 1, 3, 9, 4};
    int maxnum;

    maxnum = maxEle(array, SIZE);
    printf("The maxium number of array is: %d\n", maxnum);

    return 0;
}
int maxEle(const int ar[], int n)
{
    int max=0;
    for (int index = 0; index < n; index ++)
        if (max < ar[index])
        max = ar[index];

    return max;
}
