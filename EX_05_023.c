/*
编程练习7
编写程序，要求输入一个float类型的数，并打印该数的立方值。
使用您自己设计的函数来计算该值的立方并将它的立方打印出来。
main()程序把输入的值传递给该函数。
*/

#include <stdio.h>

float cube(float x);

int main(void)
{
	float aFloatVar;

	printf("Enter a float number:\n");
	scanf("%f", &aFloatVar);
	printf("%.2f cubed is %.2f\n", aFloatVar, cube(aFloatVar));

	return 0;
}

float cube(float x)
{
	return (x*x*x);
}
