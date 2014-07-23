// 编程练习 3 -- 读入浮点数
// The input is 21.3 or 2.1e+001
// The input is +21.290 or 2.129E+001

#include <stdio.h>

int main(void)
{
	float aFloatNumber;
	printf("Enter a float number:\n");
	scanf("%f", &aFloatNumber);
	printf("The input is %.1f or %.1e\n", aFloatNumber, aFloatNumber);
	printf("The input is %.3f or %.3e\n", aFloatNumber, aFloatNumber);

	return 0;
}


