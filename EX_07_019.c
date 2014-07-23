/*
编程练习7
输入一周中的工作小时数，然后打印工资总额、税金以及净工资。作如下假设：
a. 基本工资等级 = 100.00 美元/小时
b. 加班（超过40小时）= 1.5倍的时间
c. 税率   	前300美元为15%
			下一个150美元为20%
			余下的为25%
用#define定义常量，不必关心是否符合税法。
*/
#include <stdio.h>
#define BASE_SALARY 10.00
#define BASE_HOUR	40
#define AMT1	300
#define	AMT2	150
#define	RATE1	0.15
#define RATE2	0.2
#define	RATE3	0.25

int main(void)
{
	float  hours;
	float salary;
	float tax;
	float net_salary;

	hours = salary = tax = net_salary = 0.0;
	printf("Enter the working hours:\n");
	while( (scanf("%f", &hours)) ==1 )
	{
		if (hours < 40)
		{
			salary = BASE_SALARY * hours;
		}
		else
		{
			salary = BASE_HOUR * BASE_SALARY + BASE_SALARY * (hours - BASE_HOUR) * 1.5;
		}

		if (salary < AMT1)
		{
			tax = salary * RATE1;
		}
		else if (salary < (AMT1 + AMT2))
		{
			tax = AMT1*RATE1 + (salary - AMT1) * RATE2;
		}
		else
		{
			tax = AMT1*RATE1 + AMT2 * RATE2 + (salary - AMT1 - AMT2) * RATE3;
		}
		net_salary = salary - tax;
		printf("Total salary: %.2f, tax = %.2f, net salary = %.2f\n", salary, tax, net_salary);
		printf("Enter the working hours(q to quit):\n");
	}

	return 0;
}
