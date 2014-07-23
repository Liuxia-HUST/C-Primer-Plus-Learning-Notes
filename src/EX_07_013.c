/*
编程练习1
编写程序，读取输入直到#字符，然后报告读取的空格数目、读取的换行符数目以及读取的所有其他字符数目。
*/
#include <stdio.h>
int main(void)
{
	int blank_n;
	int enter_n;
	int ch_n;
	char ch;

	blank_n = enter_n = ch_n =0;

	printf("Enter some thing:(# to quit)\n");
	while ( (ch = getchar() ) != '#')
	{
		if (ch == ' ')
			blank_n++;
		else if (ch == '\n')
			enter_n++;
		else
			ch_n++;
	}
	printf("number of blank: %d, number of enter: %d, number of other characters:  %d", blank_n, enter_n, ch_n);

	return 0;
}
