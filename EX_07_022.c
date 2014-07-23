/*
编程练习10
1998年美国税表，分为4类，每类两个等级。下面是其摘要；美元数为应征税的收入。
种类				税金
单身				前17,850美元按15%，超出部分按28%
户主				前23,900美元按15%，超出部分按28%
已婚，共有			前29,750美元按15%，超出部分按28%
已婚，离异			前14,875美元按15%，超出部分按28%
例如，有20 000美元应征税收入的单身雇佣劳动者应缴税金0.15*17850 + 0.28*(20 000 -17850).
编写一个程序，让用户指定税金种类和应征税收入，然后计算税金。使用循环以便用户可以多次输入。
*/
#include <stdio.h>
#define AMT1 17850
#define AMT2 23900
#define AMT3 29750
#define AMT4 14875
#define RATE1 0.15
#define RATE2 0.28

int main(void)
{
	float salary;
	float amt;
	float tax;
	int flag_type;
	flag_type = 0;

    printf("********************************************************************\n");
    printf("Enter the number correnponding to be the desired pay rate or action:\n");
    printf("1) Single                     2) Head of Household \n");
    printf("3) Married, Joint             4) Married, Separate \n");
    printf("5) quit\n");
    printf("********************************************************************\n");
    scanf("%d", &flag_type);
	while(flag_type != 5)
	{
		printf("You have choose type %d \n", flag_type);
		switch(flag_type)
			{
				case 1:
					amt = AMT1;
					break;
				case 2:
					amt = AMT2;
					break;
				case 3:
					amt = AMT3;
					break;
				case 4:
					amt = AMT4;
					break;
				default:
					amt = -1.0;
					break;
			}
		if (amt < 0.0)
			printf("Invalid type!\n");
		else
		{
			printf("Enter your total salary!\n");
			while ( (scanf("%f", &salary)) == 1)
			{
				printf("Your total salary is %.2f\n", salary);
				if (salary < amt)
					tax = salary * RATE1;
				else
					tax = (salary-amt) * RATE2 + amt * RATE1;
				printf("tax = %2.f\n", tax);
				printf("Enter your total salary!(q to quit)\n");
			}
		}
		printf("Choose again!\n");
		getchar();
		scanf("%d", &flag_type);
	}

	printf("Done\n");

	return 0;
}

