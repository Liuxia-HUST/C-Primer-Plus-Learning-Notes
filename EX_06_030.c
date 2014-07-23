/*
编程练习10
编写一个程序把8个整数读入一个数组，然后以相反的顺序打印。
*/
#include <stdio.h>
#include <memory.h>
#define NUM 8
int main(void)
{
	int Ints[NUM];
	int i ;
	memset(Ints, 0, sizeof(int)*NUM);
	printf("Enter 8 integers:\n");
	for(i=0; i<NUM; i++)
	{
		printf("%2d\n", Ints[i]);
		scanf("%d", &Ints[i]);
		printf("%2d\n", Ints[i]);
	}
	for(i=NUM-1; i>= 0; i--)
	{
		printf("%2d", Ints[i]);
	}

	return 0;
}
