/*  编程练习1
编写一个程序。将用分钟表示的时间转换为以小时和分钟表示的时间。
用#defing 或者 const 来创建一个代表60的符号常量。使用while循环
来允许用户重复键入值，并且当键入一个小于等于0的时间时终止循环。
*/
#include <stdio.h>
#define M_PER_H 60
int main(void)
{
	int hours, minutes;
	int time;
	printf("Please Enter a time:\n");
	scanf("%d", &time);
	while( time > 0 )
	{
		hours = time / M_PER_H;
		minutes = time % M_PER_H;
		printf("%d minutes is %d hours %d minutes.\n", time, hours, minutes);
		printf("Please Enter a time:\n");
		scanf("%d", &time);
	}

	return 0;
}
