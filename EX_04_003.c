// Praise2.c
#include <stdio.h>
#include <string.h> //提供strlen()函数的原型
#define PRAISE "What a super marvelous name!"

int main(void)
{
	char name[6];//只能包含39个有效字符，最后一位必须存储'\0'

	printf("What's your name?\n");
	scanf("%s", name);// scanf 在遇到空格，制表符，换行符时均停止读取
	printf("Hello, %s. %s\n", name, PRAISE);

	printf("Your name of %d letters occupies %d menmory cells.\n",
			strlen(name), sizeof name);
	printf("The phrase of praise has %d letters\n",
			strlen(PRAISE));
 	printf("and occupies %d menmory cells.\n", sizeof PRAISE)		;

 	return 0;
}

