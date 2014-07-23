/*
编程练习11
考虑两个无限序列：
1.0 + 1.0/2.0 + 1.0/3.0 +...
1.0 - 1.0/2.0 + 1.0/3.0 -...
编写一个程序来计算这两个序列不断变化的总和，直到达到某个次数。让用户交互地输入这个次数。
看看在20次、100次和500次之后的总和。是否每个序列都看上去要收敛于某个值？
提示：奇数个-1相乘为-1，偶数个-1相乘为1.
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
	int i,N;
	float sum1;
	float sum2;
	int flag;

	printf("Enter N:\n");
	while (scanf("%d", &N)==1)
	{
		sum1 = 0.0;
		sum2 = 0.0;
		flag = -1;
		for(i = 1; i< N; i++)
		{
			flag *= -1;
			sum1 += 1.0/((float)i);
			sum2 += flag*1.0/((float)i);
		}
		printf("sum1 = %12.6f\nsum2 = %12.6f\n", sum1, sum2);
		printf("Enter N:\n");
	}

	return 0;
}
