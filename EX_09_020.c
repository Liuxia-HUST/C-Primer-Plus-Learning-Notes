/*
编程练习5
编写并测试函数larger_of(),其功能是将两个double类型变量的数值替换成他们中的较大值。
例如，larger_of(x,y)会把x和y中较大数值重新赋给变量x和y。
*/
#include <stdio.h>
void larger_of(double *x, double *y);
int main(void)
{
    double aDoubleVal1, aDoubleVal2;

    printf("Enter two numbers.(q to quit)\n");
    while ( scanf("%lf %lf", &aDoubleVal1, &aDoubleVal2) == 2)
    {
        printf("Before function: val1 = %f, val2 = %f.\n", aDoubleVal1, aDoubleVal2);
        larger_of(&aDoubleVal1, &aDoubleVal2);
        printf("After function: val1 = %f, val2 = %f.\n", aDoubleVal1, aDoubleVal2);

        printf("Enter two numbers, can't be 0.(q to quit)\n");
    }

    return 0;
}
void larger_of(double *x, double *y)
{
    double tmp;
    if ( (*x) > (*y))
        tmp = *x;
    else
        tmp = *y;

    *x = tmp;
    *y = tmp;

    return;
}
