/*
编程练习4
利用if else语句编写程序读取输入，直到#。用一个感叹号代替每个句号，将原有的每个感叹号用两个感叹号代替，
最后报告进行了多少次替代。
本人给出的解决方法并完全契合题意。
*/

#include <stdio.h>
#define PERIOD '.'
#define EXCLAMATORY '!'

int main(void)
{
	char ch;
	int num = 0;
	printf("enter a character:\n");

	while((ch=getchar()) != '#' )
	{
		if ( ch == PERIOD)
		{
			putchar(EXCLAMATORY);
			num++;
		}
		else if (ch == EXCLAMATORY)
			{
				putchar(EXCLAMATORY);
				putchar(EXCLAMATORY);
				num++;
			}
		else
			putchar(ch);
	}
	putchar('\n');
	printf("%d replacement\n", num);

	return 0;
}
