// print1.c --说明printf()的一些属性

#include<stdio.h>

int main(void)
{
	int ten = 10;
	int two = 2;

	printf("Doing it rifht: ");
	printf("%d minus %d is %d\n", ten, 2, ten - two);
	printf("Doing it wrong: ");
	printf("%d minus %d is %d\n.", ten,3); //忘掉2个参数

	return 0;
}
