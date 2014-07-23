/*
用户输入天数，转换为周数和天数。18天-》2周4天。
输出：
18 days are 2 weeks, 4 days.
使用一个while 循环让用户重复输入天数，输入非正数时，程序终止。
*/
#include <stdio.h>
#define DAY_PER_WEEK 7
int main(void)
{
	int days;
	printf("Enter days:\n");
	scanf("%d", &days);
	while( days > 0)
	{
		printf("%d days are %d weeks, %d days.\n", days, days / DAY_PER_WEEK, days % DAY_PER_WEEK);
		printf("Enter days: (<=0 to quit.)\n");
		scanf("%d", &days);
	}

	return 0;
}

