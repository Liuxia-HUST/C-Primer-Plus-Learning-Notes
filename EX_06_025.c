/*
编程练习5
打印 一个表，表的每行都给出一个整数、它的平方以及它的立方。
要求用户输入表的上限和下限。使用一个for循环。
*/
#include <stdio.h>
int main(void)
{
	int top_var;
	int bot_var;
	int i;

	printf("Enter the top limit of the table): \n");
	scanf("%d", &top_var);
	printf("Enter the bottom limit of the table): \n");
	scanf("%d", &bot_var);
	printf("top = %2d  bottom = %2d\n", top_var, bot_var);

	for(i = bot_var; i<= top_var; i++)
		printf("%5d %5d %5d\n", i, i*i, i*i*i);

	return 0;
}
