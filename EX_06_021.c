/*
编程练习1
创建26个元素的数组，保存26个小写字母，并显示。
*/
#include <stdio.h>
int main(void)
{
	char ch[26];

	for (int i=0; i<26; i++)
	{
		ch[i] = 'a' + i;
		printf("%2c", ch[i]);
	}

	return 0;
}
