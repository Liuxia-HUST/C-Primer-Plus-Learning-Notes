// 编程练习 2 -- 输入名字和姓氏，按照要求的格式打印

#include <stdio.h>
#include <string.h>
int main(void)
{
	char firstName[10];

	printf("Enter your firstname:\n");
	scanf("%s", firstName);

	int letters;
	letters = strlen(firstName);
	printf(" \"%s\" \n", firstName);
	printf(" \"%20s\" \n", firstName);
	printf(" \"%-20s\" \n", firstName);
	printf(" \"%*s\" \n",letters+3, firstName); //"%*s" ,* -> letters+3, s->firstname

	return 0;
}

