/*
编程练习7
修改第七章练习8，使菜单项由字符带数字进行标记。
********************************************************************
Enter the number correnponding to be the desired pay rate or action:
1) $8.75/hr						2) $9.33/hr
3) $10.00/hr					4) $11.20/hr
5) quit
********************************************************************

*/
#include <stdio.h>

char get_choice (void);
char get_first (void);
void compute(float pay_per_hour);
#define BASE_HOUR	40
#define AMT1	300
#define	AMT2	150
#define	RATE1	0.15
#define RATE2	0.2
#define	RATE3	0.25

int main(void)
{

	int flag_pay;
	float pay_per_hour;


	while((flag_pay = get_choice()) != 'q')
	{
		switch(flag_pay)
		{
			case 'a':
				pay_per_hour = 8.75;
				compute(pay_per_hour);
				break;
			case 'b':
				pay_per_hour = 9.33;
				compute(pay_per_hour);
				break;
			case 'c':
				pay_per_hour = 10.00;
				compute(pay_per_hour);
				break;
			case 'd':
				pay_per_hour = 11.20;
				compute(pay_per_hour);
				break;
			default:
				printf("Program error!\n");
                break;
		}
	}
	printf("Done\n");

	return 0;
}
// *****************
void compute(float pay_per_hour)
{
    float hours;
	float salary;
	float tax;
	float net_salary;

	hours = salary = tax = net_salary = 0.0;

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
			while(getchar() != '\n')  // 消除之前scanf()未能正确读取的剩余内容。
                continue;
}

// *****************
char get_choice(void)
{
    int ch;
    printf("********************************************************************\n");
    printf("Enter the number correnponding to be the desired pay rate or action:\n");
    printf("a) $8.75/hr                     b) $9.33/hr\n");
    printf("c) $10.00/hr                    d) $11.20/hr\n");
    printf("q) quit\n");
    printf("********************************************************************\n");
    ch = get_first();
    while ( (ch <'a' || ch > 'd') && ch != 'q' )
    {
        printf("Please respond with a, b, c, or q.\n");
        ch = get_first();
    }
    return ch;
}
// *****************
char get_first(void)
{
    int ch;

    ch = getchar();
    while ( getchar() != '\n')
        continue;

    return ch;
}
