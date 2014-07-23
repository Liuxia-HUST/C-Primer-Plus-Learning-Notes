// escape.c -- 使用转义字符
#include<stdio.h>
int main(void)
{
	float salary = 0.0;

	printf("\a Engter your desired monthly salary:");
	printf(" $_____ \b\b\b\b\b");
	scanf("%f", &salary); // scanf("%f", salary);是错误的。
	printf("\n\t$%.2f a month ys $%.2f a year", salary, salary*12.0);
	printf("\rGee!\n");

	return 0;
}
