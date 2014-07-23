/*
编程练习11
重写10.7的程序rain，main()函数中的主要功能改为由函数来执行。
*/
#include <stdio.h>
#define MONTHS 12
#define YEARS 5

void displayArrary2d(int r, int c, double ar[r][c]);
void displayArrary(int n, double a[n]);
void SumByYear (int row, int col,const double ar[row][col], double a[row]);
void SumByMonth(int row, int col,const double ar[row][col], double a[col]);
double sum(int n, double a[n]);
int main(void)
{

    const double rain[YEARS][MONTHS] = {
    {4.3,4.3,4.3,3.2,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.5},
    {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
    {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
    {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
    {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2},
    };
    double rainbyyear[YEARS];
    double rainbymonth[MONTHS];

    displayArrary2d(YEARS, MONTHS, rain);
    SumByYear(YEARS, MONTHS, rain, rainbyyear);

    printf("  YEAR   RAINFALL  (inches)\n");
    printf("2000\t2001\t2002\t2003\t2004\n");
    displayArrary(YEARS, rainbyyear);
    printf("\nThe yearly average is %.1f inches.\n\n",sum(YEARS, rainbyyear)/YEARS);

    SumByMonth(YEARS, MONTHS, rain, rainbymonth);
    printf("MONTHLY AVERAGES:\n");
    printf("Jan\t Feb\t Mar\t Apr\t May\t Jun\t Jul\t Aug\t Sep\t Oct\t Nov\t Dec\n");
    displayArrary(MONTHS, rainbymonth);




    return 0;
}
//
void SumByYear(int row, int col,const double ar[row][col],double a[row])
{
    int i, j;
    double tot;
    for (i = 0; i < row; i++)
    {
        tot= 0.0;
        for ( j = 0;  j< col; j++)
            tot += ar[i][j];
        a[i] = tot;
    }
}
//
void SumByMonth(int row, int col,const double ar[row][col], double a[col])
{
    int i, j;
    double tot;
    for (i = 0; i < col; i++)
    {
        tot= 0.0;
        for ( j = 0;  j< row; j++)
            tot += ar[j][i];
        a[i] = tot/row;
    }
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
void displayArrary(int n, double a[n])
{
    int i ;
    for ( i = 0; i < n; i++)
        printf("%-4.2f\t", a[i]);
    printf("\n");
}
//
double sum(int n, double a[n])
{
    double tot = 0.0;
    int i ;

    for ( i = 0; i < n; i++)
        tot += a[i];

    return tot;
}
