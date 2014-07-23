//floats.c --浮点数的控制输出

#include <stdio.h>
int main(void)
{
	const double RENT = 3852.99;//以const方法定义的常量

	printf("*%f*\n", RENT);
	printf("*%e*\n", RENT);
	printf("*%4.2f*\n", RENT);
	printf("*%3.1f*\n", RENT);
	printf("*%10.3f*\n", RENT);
	printf("*%10.3e*\n", RENT);
	printf("*%+4.2ff*\n", RENT);
	printf("*%010.2f*\n", RENT);

	return 0;
}
