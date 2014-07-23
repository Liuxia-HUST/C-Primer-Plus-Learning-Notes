// 编程练习 5 -- 输入姓名，打印姓氏和名字的字母个数，对齐
// Melissa Honeybee
//       7        8
#include <stdio.h>
#include <string.h>

int main(void)
{
	char firstname[10];
	char lastname[10];
	int num_FirstName;
	int num_LastName;

	printf("Enter your first name:\n");
	scanf("%s", firstname);
	num_FirstName = strlen(firstname);
	printf("Enter your last name:\n");
	scanf("%s", lastname);
	num_LastName = strlen(lastname);

	printf("%*s %*s\n", num_FirstName, firstname, num_LastName, lastname);
	printf("%*d %*d\n", num_FirstName, num_FirstName, num_LastName, num_LastName);
	printf("%-*s %-*s\n", num_FirstName, firstname, num_LastName, lastname);
	printf("%-*d %-*d\n", num_FirstName, num_FirstName, num_LastName, num_LastName);
	return 0;
}


