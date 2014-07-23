/*
编程练习9
要求用户输入下限整数和上限整数，然后，依次计算从下限到上限的每个整数的平方的加和，最后显示结果。
程序不断提示用户输入下限整数和上限整数并显示答案，直到用户输入的上限整数等于或小于下限整数为止。
*/
#include <stdio.h>
int main(void)
{
	int low;
	int up;
	int status;
	status = 0;
	printf("Enter lower and upper integer limits: \n");
	status = (scanf("%d  %d", &low, &up));

	while( status == 2 && (low < up) )
		{
			int sum = 0;
			for(int i=low; i<= up; i++)
				{
					sum += i*i;
				}
			printf("The sums of the squares from %d to %d is %d\n", low, up, sum);
			printf("Enter next set of limits:\n");
			status = (scanf("%d  %d", &low, &up));
		}
	printf("Done\n");

	return 0;
}
