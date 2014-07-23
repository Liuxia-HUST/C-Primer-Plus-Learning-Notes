// 编程练习 1 -- 输入名字和姓氏，然后以“名字，姓氏”的格式打印

#include <stdio.h>
int main(void)
{
	char firstName[10];
	char lastName[10];

	printf("Enter your firstname:\n");
	scanf("%s", firstName);
	printf("Enter your lastname:\n");
	scanf("%s", lastName);

	printf("%s %s\n", firstName, lastName);


	return 0;
}

