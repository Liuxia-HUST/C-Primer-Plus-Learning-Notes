/*
编程练习12
编写一个程序，提示用户输入3个数集，每个数集包括5个double值。
程序应当实现下列所有功能：
a.把输入信息存储到一个3*5的数组中；
b.计算每个数集（包括5个数值）的平均值；
c.计算所有数值的平均值；
d.找出这15个数中的最大值；
e.打印出结果
每个任务需要用一个单独的函数来实现（使用传统C处理数组的方法）。
对于任务b，需要编写计算并返回一维数组平均值的函数，循环3次调用
该函数来实现任务b。对于其他任务，函数应当把整个数组作为参数，并
且完成c和d的函数应该向它的调用函数返回答案。
*/
#include <stdio.h>
#define ROWS 3
#define COLS 5
void get_arrary(double a[][COLS], int row);
double mean_arrary1d(double a[], int col);
double mean_arrary2d(double a[][COLS], int row);
double max_arrary2d(double a[][COLS], int row);
void displayArrary2d(double a[][COLS], int row);
int main(void)
{
    int i;
    double data[ROWS][COLS];

    printf("Enter 15 numbers:\n");
    get_arrary(data, ROWS);
    displayArrary2d(data, ROWS);
    for (i = 0; i < ROWS; i++)
        printf("Average of data set %d is %f\n", i+1, mean_arrary1d(data[i], COLS));
    printf("Average of all data is %f\n", mean_arrary2d(data, ROWS));
    printf("Max number of data is %f\n", max_arrary2d(data, ROWS));

    return 0;
}

void get_arrary(double a[][COLS], int row)
{
    int i, j;
    for (i = 0; i < row; i++)
        for(j = 0; j < COLS; j++)
            scanf("%lf", &a[i][j]);
}

void displayArrary2d(double a[][COLS], int row)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < COLS; j++)
            printf("%6.2f\t", a[i][j]);
        printf("\n");
    }
}

double mean_arrary1d(double a[], int col)
{
    int i;
    double tot = 0.0;
    for (i = 0; i < col; i++)
        tot += a[i];

    return (tot/col);
}

double mean_arrary2d(double a[][COLS], int row)
{
    int i, j;
    double tot = 0.0;
    for (i = 0; i < row; i++)
        {
            for (j = 0; j < COLS; j++)
                tot += a[i][j];
        }
    return (tot/(COLS*row));
}

double max_arrary2d(double a[][COLS], int row)
{
    int i, j;
    double max = a[0][0];
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < COLS; j++)
            if( max < a[i][j])
                max = a[i][j];
    }

    return max;
}
