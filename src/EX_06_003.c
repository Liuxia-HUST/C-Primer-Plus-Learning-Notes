// while1.c -- 注意花括号的使用
// 拙劣的代码产生了无限循环
#include <stdio.h>
int main(void)
{
	int n =0;

	while(n<3)
		printf("n is %d\n", n);
		n++;
	printf("That's all this program does.\n");

	return 0;
}
