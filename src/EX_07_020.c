/*
编程练习8
修改练习7中的假设a，使程序提供一个选择工资等级的菜单。用switch选择工资等级。程序运行的开头应该如下：
********************************************************************
Enter the number correnponding to be the desired pay rate or action:
1) $8.75/hr						2) $9.33/hr
3) $10.00/hr					4) $11.20/hr
5) quit
********************************************************************

*/
#include <stdio.h>
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
	float pay_per_hour;
	hours = salary = tax = net_salary = 0.0;
	int status, flag_pay;

    printf("********************************************************************\n");
    printf("Enter the number correnponding to be the desired pay rate or action:\n");
    printf("1) $8.75/hr                     2) $9.33/hr\n");
    printf("3) $10.00/hr                    4) $11.20/hr\n");
    printf("5) quit\n");
    printf("********************************************************************\n");
    status = scanf("%d", &flag_pay);
	while(flag_pay != 5)
	{
		while (status != 1)
		{
			printf("Invalid!!! Choose again!\n");
			getchar();
			status = scanf("%d", &flag_pay);
		}

		switch(flag_pay)
		{
			case 1:
				pay_per_hour = 8.75;
				break;
			case 2:
				pay_per_hour = 9.33;
				break;
			case 3:
				pay_per_hour = 10.00;
				break;
			case 4:
				pay_per_hour = 11.20;
				break;
			case 5:
				pay_per_hour = -1.0;
				break;
		}

		if (pay_per_hour <0 )
			printf("Bye!\n");
		else
		{
			printf("Payment per hour: %.2f\n", pay_per_hour);
			printf("Enter the working hours:\n");
			while( (scanf("%f", &hours)) == 1  )
			{
				if (hours < 40)
				{
					salary = pay_per_hour * hours;
				}
				else
				{
					salary = BASE_HOUR * pay_per_hour + pay_per_hour * (hours - BASE_HOUR) * 1.5;
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

		}
		printf("Enter the number correnponding to be the desired pay rate or action:\n");
		getchar();
		status = scanf("%d", &flag_pay);
	}
	printf("Done\n");

	return 0;
}
