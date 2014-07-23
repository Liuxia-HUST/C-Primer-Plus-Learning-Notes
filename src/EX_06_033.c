/*
编程练习13
创建两个8元素的double数组，使用一个循环来让用户键入第一个数组的8个元素值。程序把第二个数组的元素设置为第一个数组元素的累积和。
例如，第二个数组的第四个元素应该等于第一个数组的前四个元素之和，第二个数组的第五个元素应该等于第一个数组前五个元素之和（使用嵌套
循环可以做到这一点。不过利用第二个数组的第五个元素等于第二个数组的第四个元素加上第一个数组的第五个元素这一事实，可以避免嵌套而
只使用单个循环来完成任务）。最后，使用一个循环来显示两个数组的内容。
*/
#include <stdio.h>
#define SIZE 8
int main(void)
{
	double valA[SIZE], valB[SIZE];
	int i;
	printf("Enter the %d numers:\n", SIZE);
	for(i = 0; i<SIZE; i++)
	{
		scanf("%lf", &valA[i]);
	}

	valB[0] = valA[0];
	for(i = 1; i<SIZE; i++)
	{
		valB[i] = valB[i-1] + valA[i];
	}

	for(i = 0; i<SIZE; i++)
	{
		printf("%12.2f", valA[i]);
	}
	printf("\n");
	for(i = 0; i<SIZE; i++)
	{
		printf("%12.2f", valB[i]);
	}

	return 0;
}
