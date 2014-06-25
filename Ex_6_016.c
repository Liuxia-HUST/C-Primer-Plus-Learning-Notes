/*
Chapter6, ex16
编程练习16
Chuckie Lucky赢了100万美元，他把它存入一个每年赢得8%的账户。在每年的最后一天， Chuckie取出10万美元。
编写一个程序，计算需要多少年Chuckie就会清空他的账户。
*/
#include <stdio.h>
int main(void)
{
	float money_left;
	int year;
	money_left = 100.0;
	year = 0;
	while( money_left >0)
	{
		year++;
		money_left *= 1.08;
		money_left -= 10.0;
		printf("In the %d year, money left is %.2f\n", year, money_left);
	}

	return 0;
}
