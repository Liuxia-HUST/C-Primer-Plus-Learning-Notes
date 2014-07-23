// skippart.c -- 使用continue跳过部分循环
// continue 处于嵌套结构中，仅影响包含它的最里层结构
#include <stdio.h>
int main(void)
{
	const float MIN = 0.0f;
	const float MAX = 100.0f;

	float score;
	float total = 0.0f;
	int n = 0;
	float min = MAX;
	float max = MIN;

	printf("Enter the first score (q to quit): ");
	while (scanf("%f", &score) == 1)
	{
		if (score < MIN || score >MAX)
		{
			printf("%0.1f is a invalid value. Try again: ", score);
			continue;
		}
		printf("Accepting %0.1f: \n", score);
		min = (score < min)? score: min;
		max = (score > max)? score: max;
		total += score;
		n++;
		printf("Enter next score (q to quit): ");
	}
	if( n > 0)
	{
		printf("Average of %d score is %0.1f.\n", n, total /n);
		printf("Low = %0.1f, high = %0.1f\n", min, max);
	}
	else
		printf("No invalid scores were entered.\n");

	return 0;
}
