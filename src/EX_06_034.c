/*
编程练习14
编写一个程序读入一行输入，然后反向打印该行。可以把输入存储在一个char数组中；
假定改行不超过255个字符。回忆一下，可以使用具有%c说明符的scanf()从输入中一次读入一个字符，而且当你按下回车时会产生换行符(\n)。
*/
#include <stdio.h>
#define SIZE  255
int main(void)
{
	char ch[SIZE];
	int i = 0;
	int len = 0;
	while( (scanf("%c", &ch[i]) == 1) && (ch[i]!='\n'))
	{
		i++;
		len++;
	}
	for(i =len; i>=0; i--)
	{
		printf("%c", ch[i]);
	}

	return 0;
}
