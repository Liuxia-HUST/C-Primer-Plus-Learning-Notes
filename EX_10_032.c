/*
编程练习13
利用变长数组作为函数参量重做练习12
*/
#include <stdio.h>
#define ROWS 3
#define COLS 5
void get_arrary(int row, int col, double a[row][col]);
double mean_arrary1d(double a[], int col);
double mean_arrary2d(int row, int col, double a[row][col]);
double max_arrary2d(int row, int col, double a[row][col]);
void displayArrary2d(int row, int col, double a[row][col]);
int main(void)
{
    int i;
    double data[ROWS][COLS];

    printf("Enter 15 numbers:\n");
    get_arrary(ROWS, COLS, data);
    displayArrary2d(ROWS, COLS, data);
    for (i = 0; i < ROWS; i++)
        printf("Average of data set %d is %f\n", i+1, mean_arrary1d(data[i], COLS));
    printf("Average of all data is %f\n", mean_arrary2d(ROWS, COLS, data));
    printf("Max number of data is %f\n", max_arrary2d(ROWS, COLS, data));

    return 0;
}
// *****************************
void get_arrary(int row, int col, double a[row][col])
{
    int i, j;
    for (i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            scanf("%lf", &a[i][j]);
}
// *****************************
void displayArrary2d(int row, int col, double a[row][col])
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%6.2f\t", a[i][j]);
        printf("\n");
    }
}
// *****************************
double mean_arrary1d(double a[], int col)
{
    int i;
    double tot = 0.0;
    for (i = 0; i < col; i++)
        tot += a[i];

    return (tot/col);
}
// *****************************
double mean_arrary2d(int row, int col, double a[row][col])
{
    int i, j;
    double tot = 0.0;
    for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
                tot += a[i][j];
        }
    return (tot/(col*row));
}
// *****************************
double max_arrary2d(int row, int col, double a[row][col])
{
    int i, j;
    double max = a[0][0];
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
            if( max < a[i][j])
                max = a[i][j];
    }

    return max;
}
