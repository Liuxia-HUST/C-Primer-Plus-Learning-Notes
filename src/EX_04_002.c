// praise1.c -- 使用不同类别的字符串

#include <stdio.h>
//#include <string.h>
#define PRAISE "What a super marvelous name!"
int main(void)
{
	char name[40];

	printf("What's your name?\n");
	scanf("%s", name);// scanf 在遇到空格，制表符，换行符时均停止读取
	printf("Hello, %s. %s\n", name, PRAISE);

	return 0;
}
