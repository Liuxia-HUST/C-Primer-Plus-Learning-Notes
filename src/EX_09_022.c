/*
编程练习7
在第6章“C控制语句：循环”的程序清单6.20中，函数pow()的功能是返回一个double类型数的某个正整数次幂。现在改进该函数，
使其能正确地计算负幂。同时，用该函数实现0的任何次幂为0，并且任何数值的0次幂为1.使用循环的方法编写该函数并在一个
程序中测试它。
*/
#include <stdio.h>
double power(double n, int p);
int main(void)
{
	double x, xpow;
	int exp;

	printf("Enter a number and the integer power");
	printf(" to which\nthe number will be raised. Enter q");
	printf(" to quit.\n");
	while(scanf("%lf%d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
		printf("Enter next pair of numbers or q to quit.\n");
	}
	printf("Hope you enjoyed this power trip -- bye!\n");

	return 0;
}

double power(double n, int p)
{
	double pow = 1;
	int i;

    if( n == 0.0)
        pow = 1.0;
    else
    {
        if(p > 0)
            for(i = 1; i<= p; i++)
            {
                pow *= n;
            }
        else if (p < 0)
            for(i = 1; i<= (-1*p); i++)
            {
                pow /= n;
            }
        else
            pow = 1.0;
    }

	return pow;
}
