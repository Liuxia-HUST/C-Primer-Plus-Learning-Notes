/*
编程练习6
编写一个程序读取输入，直到#，并报告序列ei出现的次数。
此程序必须要记住前一个字符和当前的字符。用“Receive your eieio award。”的输入测试。
*/
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	bool e_count;
	int count;
	char ch;

	e_count = false;
	count = 0;

	while( (ch = getchar()) != '#')
	{
		if (ch == 'e')
			e_count =true;
		if ( e_count && ch == 'i' )
			{
				count++;
				e_count = false;
			}
	}
	printf("ei occuered %d times.\n", count);

	return 0;
}

/* 另一种写法
#include <stdio.h>
int main(void)
{
	int count;
	char ch, ch_pre;

	count = 0;
	ch_pre = '#';

	while( (ch = getchar()) != '#')
	{
		if( (ch == 'i') && (ch_pre == 'e'))
			count++;
		ch_pre = ch;
	}
	printf("ei occuered %d times.\n", count);

	return 0;
}

*/
