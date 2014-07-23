// 习题1

#include <stdio.h>

int main(void)
{
	int i = 123456789123456789;
	printf("%d \n",i);//整型上溢出

	float float_upflow = 3.4e48*100.0f;
	printf("%f\n", float_upflow);//浮点数上溢出 ,inf

	float a, b;
	a = 2.0e20 + 1.0;
	b = a - 2.0e20;
	printf("%f   %f\n", a, b);// 浮点数下溢出

	return 0;
}
