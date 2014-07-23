/*
编程练习3
读取整数，直到输入0。输入终止后，程序应该报告输入的偶数（不包括0）总个数，
偶数的平均数，输入的奇数总个数以及奇数的平均数。
*/

#include <stdio.h>
int main(void)
{
	int aIntVar;
	int odd_n;
	int even_n;
	int sum_odd;
	int sum_even;
	odd_n = even_n = sum_even = sum_odd =0;

	printf("Enter some integers, 0 to quit.\n");
	while ( (scanf("%d", &aIntVar)) == 1 && aIntVar != 0)
	{
		if(aIntVar%2 == 0)
			{
				even_n++;
				sum_even += aIntVar;
			}
		else
			{
				odd_n++;
				sum_odd += aIntVar;
			}
	}
	printf("Number of odd is %d, average = %.2f\n", odd_n, (float)sum_odd / odd_n);
	printf("Number of even is %d, average = %.2f\n", even_n, (float)sum_even / even_n);

	return 0;
}
