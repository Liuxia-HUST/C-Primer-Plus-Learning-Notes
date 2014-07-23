/*
编程练习2
编写程序，读取输入直到#字符。程序打印每个输入字符以及它的十进制ASCII码。
每行打印8个字符/编码对。建议：利用字符计数和模运算在每8个循环周期打印一个换行符。
*/
#include <stdio.h>
int main(void)
{
	int number;
	char ch;

	number = 0;
	printf("Enter some thing :\n");
	while ( (ch = getchar()) != '#')
	{
		number++;
		printf("%4c%4d", ch, ch);
		if (number%8 == 0)
			printf("\n");q
	}

	printf("\nDone.\n");

	return 0;
}
