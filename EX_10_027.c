/*
编程练习8
编写一个程序，初始化一个3x5的二维数组，并利用一个基于变长数组的函数把该数组复制到另一个二维数组。
还要编写一个基于变长数组的函数来显示两个函数的内容。这两个函数应该能够处理任意的NxM数组（如果没有
可以支持变长数组的编译器，就使用传统C中处理Nx5数组的函数方法）。
*/
#include <stdio.h>
#define N 3
#define M 5
void displayArrary2d(int n, int m, int ar[n][m]); // 注意VLA的定义应该在维数定义的后面
void copy_arr2d(int n, int m, int org_ar[n][m], int tar_ar[n][m]);

int main(void)
{

    int orgArr[N][M] = { {1,2,3,4,5}, {-1,-2,-3,-4,-5}, {0, 2, 4, 6, 8} };
    int n = 3;
    int m = 5;
    int tarArr[n][m];

    printf("The original matrix:\n");
    displayArrary2d(N, M, orgArr);
    copy_arr2d(n, m, orgArr, tarArr);
    printf("The target matrix:\n");
    displayArrary2d(n, m, tarArr);

    return 0;
}
// copy matrix
void copy_arr2d(int n, int m, int org_ar[n][m], int tar_ar[n][m])
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            tar_ar[i][j] = org_ar[i][j];
}

// 显示数组
void displayArrary2d(int n, int m, int ar[n][m])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%4d\t", ar[i][j]);
        printf("\n");
    }
}
