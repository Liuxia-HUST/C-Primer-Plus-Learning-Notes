/*
编程练习4
编写一个函数，返回一个double数组中存储的最大数值的索引，并在一个简单的程序中测试这个函数。
*/
#include <stdio.h>
#define SIZE 5
int maxIndex(const double ar[], int n);
int main(void)
{
    double array[SIZE] = {6, 1, 3, 9, 4};
    int maxnum;

    maxnum = maxIndex(array, SIZE);
    printf("The  maxium number of array is: a[%d] = %f\n", maxnum, array[maxnum]);

    return 0;
}
int maxIndex(const double ar[], int n)
{
    int maxI=0;
    int max = 0;
    for (int index = 0; index < n; index ++)
        if (max < ar[index])
        {
            max = ar[index];
            maxI = index;
        }

    return maxI;
}
