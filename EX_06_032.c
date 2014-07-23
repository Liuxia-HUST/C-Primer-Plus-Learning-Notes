/*
编程练习12
创建一个8元素的int数组，并且把元素分别设置为2的前8次幂，然后打印。
用for循环创建，do while循环显示。
*/
#include <stdio.h>
#define SIZE 8
int main(void)
{
	int IntVals[SIZE];
	int i;
	int tmp;

	tmp = 2;
	for(i = 0; i<SIZE; i++)
	{
		IntVals[i] = tmp;
		tmp *= 2;
	}

	i = 0;
	do
	{
		printf("IntVal[%d] = %d\n", i, IntVals[i]);
		i++;
	} while(i<SIZE);

	return 0;
}
