// pintval.c -- printf的返回值
#include <stdio.h>
int main(void)
{
	int bph2o = 212;
	int rv;

	rv = printf("%d F is water's boiling point.\n", bph2o);

	printf("The printf() function printed %d characters.\n", rv);//返回打印的字符数，含空格及换行符。

	return 0;
}
