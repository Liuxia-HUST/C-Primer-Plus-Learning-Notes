// cypher1.c -- 改变输入，只保留其中的空格
#include <stdio.h>
#define SPACE ' ' // SPACE 相当于“单引号-空格-单引号”
int main(void)
{
	char ch;

	ch = getchar();
	while (ch != '\n')
	{
		if (ch == SPACE)
			putchar(ch);
		else
			putchar(ch+1);
		ch = getchar();
	}
	putchar(ch);

	return 0;
}
// 另一种写法
/*
#include <stdio.h>
#define SPACE ' ' // SPACE 相当于“单引号-空格-单引号”
int main(void)
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		if (ch == SPACE)
			putchar(ch);
		else
			putchar(ch+1);
	}
	putchar(ch);//打印换行符

	return 0;
}
*/
