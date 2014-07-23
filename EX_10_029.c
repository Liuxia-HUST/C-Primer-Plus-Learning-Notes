/*
编程练习10
编写一个程序，声明一个3x5的数组并初始化，具体数值可以随意。程序打印出数值，然后数值
翻一番，接着再次打印出新值。编写一个函数来显示数组的内容，再编写另一个函数来执行翻倍
功能。数值名和数组行数作为参数由程序传递给函数。
*/
#include <stdio.h>
#define ROWS 3
#define COLS 5

void displayArrary2d(int r, int c, double ar[r][c]);
void DOUBLEMatrix(int r, int c, double ar[r][c]);
int main(void)
{
    double org_ar[ROWS][COLS] = {{0, 1, 2, 3, 4},{0, -1, -2, -3, -4},{2, 4, 6, 8, 10}};

    printf("\nBefore:\n");
    displayArrary2d(ROWS, COLS, org_ar);
    DOUBLEMatrix(ROWS, COLS, org_ar);
    printf("\nAfter:\n");
    displayArrary2d(ROWS, COLS, org_ar);

    return 0;
}
// display the matrix
void displayArrary2d(int r, int c, double ar[r][c])
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
            printf("%6.2f\t", ar[i][j]);
        printf("\n");
    }
}
//
void DOUBLEMatrix(int r, int c, double ar[r][c])
{
        int i, j;
    for (i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
           ar[i][j] *= 2;
    }
}
