/*
编程练习1
设计函数min(x,y)，返回两个double数值中较小的数值，同时用一个简单的驱动程序测试该函数。
*/
#include <stdio.h>
double min(double x, double y);
int main(void)
{
    double a, b;
    printf("Enter two double numbers:(q to quit)\n");
    while( (scanf("%lf %lf", &a, &b)) == 2)
    {
        printf("The small number is %f.\n", min(a, b));
        printf("Enter two double numbers:(q to quit)\n");
    }

    return 0;
}

double min(double x, double y)
{
    return (x>y)? y : x;
}
