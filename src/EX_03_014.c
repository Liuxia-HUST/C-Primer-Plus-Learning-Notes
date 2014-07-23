// 习题4 -- 读入浮点数，分别以小数形式和指数形式打印。
// The input is 21.29000 or 2.129000e+001.

#include <stdio.h>
int main(void)
{
	float  FloatInput;

	scanf("%f", &FloatInput);
	printf("The input is %.5f or %6e", FloatInput, FloatInput);

	return 0;
}
