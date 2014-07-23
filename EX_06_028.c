/*
编程练习8
输入两个浮点数，打印用二者的差值除以二者的乘积所得的结果。
在用户键入非数字的输入之前程序循环处理每对输入值。
用函数计算二者的差值除以二者的乘积所得的结果。
*/

#include <stdio.h>
double func(double a, double b);
int main(void)
{
	double x, y;
	printf("Enter two numbers:\n");
	while(scanf("%lf %lf", &x, &y) == 2)
	{
		printf("%f\n", func(x,y));
		printf("Enter two numbers(q to quit):\n");
	}

	return 0;
}
double func(double a, double b)
{
	double result;
	result = (a-b)/(a*b);
	return result;
}
