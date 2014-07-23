// paint.c -- 使用条件运算符
// 表达式1 ? 表达式2: 表达式3    若表达式1为真，则整个表达式的值和表达式2相同；否则整个表达式的值与表达式3相同
// max= (a>b) ? a:b;

#include <stdio.h>
#define COVERAGE 200  // 每罐漆可以喷的平方英尺数
int main(void)
{
	int sq_feet;
	int cans;

	printf("Enter number of square feet to be painted:\n");
	while (scanf("%d", &sq_feet) == 1)
	{
		cans = sq_feet / COVERAGE;
		cans += ((sq_feet % COVERAGE == 0)?0:1);
		printf("You need %d %s of paint.\n", cans, cans == 1?"can":"cans");
		printf("Enter next value (q to quit):\n");
	}

	return 0;
}
