/*
编程练习9
编写一个程序，接受一个整数输入，然后显示所有小于或等于该数的整数。
*/
#include <stdio.h>
#include <stdbool.h>
int Prime(int aIntVal);
int main(void)
{
	int n;
	int i;
	int count;
	printf("Enter a intgeger:\n");
	while((scanf("%d", &n)))
	{
		count = 0;
		for(i = 2; i<= n; i++)
		{
			if ( Prime(i) == 1)
			{
				printf("%4d", i);
				count++;
				if ( (count !=0) && (count%8 == 0))
				printf("\n", count);
			}

		}
		printf( "\n%d prime number!", count);
		printf("\nEnter a intgeger:(q to quit)\n");
	}

	return 0;
}

int Prime(int aIntVal)
{
	int i;
	bool isPrime;
	if (aIntVal == 2)
		isPrime = true;
	else
	{
		for(i=2; i<aIntVal; i++)
		{
			if ( aIntVal%i == 0)
			{
				isPrime = false;
				break;
			}
			else
				isPrime = true;
		}
	}
	if(isPrime)
		return 1;
	else
		return 0;
}
