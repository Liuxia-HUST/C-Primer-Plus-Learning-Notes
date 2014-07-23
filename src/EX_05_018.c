/*
此程序要求输入一个整数，然后打印从（包括）输入的值到（包括）比输入值大10的所有整数值（也就是说，如果输入为5，输出5-15）。
要求在各个输出值之间用空格、制表符或者换行符分开
*/

#include <stdio.h>
int main(void)
{
	int aIntVar;
	printf("Enter an integer:\n");
	scanf("%d", &aIntVar);
	printf("OK!\n");
	int count = 11;
	while(count-- >0)
	{
		printf("%d\n", aIntVar);
		aIntVar ++;
	}
	return 0;
}
