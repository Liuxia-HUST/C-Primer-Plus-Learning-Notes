/*
编程练习15
Daphme以10%的单利息投资了100美元（也就是说，每年投资盈得的利息等于原始投资的10%）。
Deirdre则以每年5%的复合利息投资了100美元（也就是说利息是当年结余的5%，其中包括之前的利息）。
编写一个程序，计算需要多少年Deirdre的投资额才会超过Daphme，并且显示出那时两个人的投资额。
*/

#include <stdio.h>
int main(void)
{
	int year;
	float DaphmeMoney, DeirdreMoney;
	DaphmeMoney = 100.0;
	DeirdreMoney= 100.0;
	year = 0;
	while((DeirdreMoney - DaphmeMoney) < 0.001)
	{
		DaphmeMoney += 100.0*0.1;
		DeirdreMoney *= 1.05;
		year++;
		printf("After %d years:\n", year);
		printf("DaphmeMoney  : %.2f\t", DaphmeMoney);
		printf("DeirdreMoney : %.2f\n", DeirdreMoney);

	}
	printf("After %d years:\n", year);
	printf("DaphmeMoney  : %.2f\t", DaphmeMoney);
	printf("DeirdreMoney : %.2f\n", DeirdreMoney);
	return 0;
}
