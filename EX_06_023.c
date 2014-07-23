/*
编程练习3
嵌套循环输出
F
FE
FED
FEDC
*/
#include <stdio.h>
int main(void)
{
	int row;
	row = 6;
	char ch;

	for(int i=0; i<row; i++)
	{
		ch = 'F';
		for(int j = 0; j < i+1; j++)
			{

				printf("%c", ch);
				ch = ch -1;
			}
		printf("\n");
	}

	return 0;
}
