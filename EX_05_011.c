// post_pre.c -- 后缀和前缀
#include <stdio.h>
int main(void)
{
	int a = 1;
	int b = 1;
	int aplus, plusb;

	aplus = a++;// aplus 保存的是a改变之前的值
	plusb = ++b;
	printf("a plusa b plusb\n");
	printf("%1d %5d %5d %5d\n", a, aplus, b, plusb);// 2 1 2 2

	return 0;
}
