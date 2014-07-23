/*
编程练习2
嵌套循环输出$
*/
#include <stdio.h>
int main(void)
{
	int row;
	row = 5;

	for(int i=0; i<row; i++)
		{
		for(int j = 0; j < i+1; j++)
			printf("$");
		printf("\n");
		}

	return 0;
}
