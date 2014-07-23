/*
编程练习6
编写一个程序，初始化一个二维double数组，并利用练习2中的任一函数来把这个数组复制到另一个二维数组
（因为二维数组是数组的数组，所以可以使用处理一维数组的函数来复制数组的每一个子数组）。
*/

#include <stdio.h>
#define ROWS 2
#define COLS 3
void copy_arr (double ar[], double tar_ar[], int n);
void displayArrary(double ar[], int n);

int main(void)
{
    double org_ar[ROWS][COLS] = {{0.1, 0.2, 0.3},{-0.1, -0.2, -0.3}};
    double tar_ar[ROWS][COLS];
    int i;

    printf("The orginal arrary:\n");
    for (i = 0; i < ROWS; i++)
        displayArrary(org_ar[i], COLS);

    for (i = 0; i < ROWS; i++)
        copy_arr(org_ar[i], tar_ar[i], COLS);

    printf("The copy of array:\n");
    for (i = 0; i < ROWS; i++)
        displayArrary(tar_ar[i], COLS);

    return 0;
}

void copy_arr (double *ptr1, double *ptr2, int n)
{
    int i;
    for (i = 0; i< n; i++)
        *(ptr2+i) = *(ptr1+i);

}
void displayArrary(double ar[], int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
        printf("%6.2f ", ar[i]);

    printf("\n");
}
