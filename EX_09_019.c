/*
编程练习4
两数值的谐均值可以这样计算：首先对两数值的倒数取平均值，最后再取倒数。编写一个带有两个double参数的函数，
计算这两个参数的谐均值。
*/

#include <stdio.h>
double harmonic_mean(double, double);
int main(void)
{
    double aDoubleVal1, aDoubleVal2;
    printf("Enter two numbers, can't be 0.(q to quit)\n");
    while ( scanf("%lf %lf", &aDoubleVal1, &aDoubleVal2) == 2)
    {
        if (aDoubleVal1 == 0.0 || aDoubleVal2 ==0 )
            printf("Can't be 0.(q to quit)\n");
        else
            printf("Harmonic mean of %0.2f and %0.2f is %0.2f.\n", aDoubleVal1, aDoubleVal2, harmonic_mean(aDoubleVal1, aDoubleVal2));
        printf("Enter two numbers, can't be 0.(q to quit)\n");
    }

    return 0;
}

double harmonic_mean(double x, double y)
{
    double tmp;
    tmp = (1.0/x + 1.0/y)/2;
    return (1/tmp);
}
