/*
编程练习5
改写用来找到前20个整数之和的程序addemup.c（5.13）
修改程序，目的是能够交互地告诉程序将计算进行到哪里。
即，用一个读入的变量来代替20；
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
			sum = sum + count;//语句
		printf("sum = %d\n", sum);//函数语句
		printf("Enter a integer(<= 0 to quit):\n");
		scanf("%d", &Num);
	}

	return 0;
}
