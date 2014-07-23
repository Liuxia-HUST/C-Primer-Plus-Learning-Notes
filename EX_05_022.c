/*
编程练习6
改写练习5，使它能够计算平方的和。
*/
// addemup.c -- 4种类型的语句

#include <stdio.h>
int main(void) //求前20个整数的和
{

	int Num;
	printf("Enter a integer:\n");
	scanf("%d", &Num);

	while (Num >0)
	{
		int count, sum; // 声明语句
		count = 0;//赋值语句
		sum = 0;
		while (count++ < Num)//while
			sum = sum + count*count;//语句
		printf("sum = %d\n", sum);//函数语句
		printf("Enter a integer(<= 0 to quit):\n");
		scanf("%d", &Num);
	}

	return 0;
}
