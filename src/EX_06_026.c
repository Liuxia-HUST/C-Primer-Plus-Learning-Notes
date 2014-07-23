/*
编程练习6
把单词读入一个字符数组，然后反向打印这个词。
使用strlen()函数计算数组中最后一个字符的索引。
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	char ch[100];
	int letters;
	printf("Enter a word:\n");

	scanf("%s", ch);

	printf("The word you just entered was: %s.\n",ch);

	letters = strlen(ch);
	for(int i = letters; i>=0; i--)
	{
		printf("%2c", ch[i]);
	}
	printf("\n");

	return 0;
}
