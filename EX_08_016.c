/*
编程练习8
编写一个程序，显示一个菜单，未您提供加法、减法、乘法或除法的选项。获得您的选择后，该程序
请求两个数，然后执行您选择的操作。该程序应该只接受它所提供的菜单选项。它应该使用float类型
的数，并且如果用户未能输入数字应允许其重新输入。在除法的情况中，如果用户输入0作为第二个数，
该程序应该提示用户输入一个新的值。
*/
#include <stdio.h>

char get_choice (void);
char get_first (void);
float get_float(void);
int isvalid(int);
void plus(void);
void minus(void);
void times(void);
void divides(void);

int main(void)
{
    int type;

    while((type = get_choice()) != 'q')
	{
		switch(type)
		{
			case 'a':
				plus();
				break;
			case 's':
				minus();
				break;
			case 'm':
				times();
				break;
			case 'd':
				divides();
				break;
			default:
				printf("Program error!\n");
                break;
		}
	}
	printf("Done\n");

	return 0;
}

//
int isvalid(int ch)
{
    switch(ch)
    {
    case 'a':
        return 1;
        break;
    case 's':
        return 1;
        break;
    case 'm':
        return 1;
        break;
    case 'd':
        return 1;
        break;
    default:
        return 0;
        break;
    }
}
// *****************
char get_choice(void)
{
    int ch;
    printf("********************************************************************\n");
    printf("Enter the operation of your choice:\n");
    printf("a) add                     b) subtract\n");
    printf("m) multiply                d) divide\n");
    printf("q) quit\n");
    printf("********************************************************************\n");
    ch = get_first();
    while ( (isvalid(ch) != 1) && ch != 'q' )
    {
        printf("Please respond with a, s, m, d, or q.\n");
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
//
float get_float(void)
{
    float x;
    while ( scanf("%f", &x) != 1)
    {
        printf("Enter an valid number: \n");
        while(getchar() != '\n' )
            continue;
    }
    while(getchar() != '\n' )
        continue;

    return  x;
}
//
void plus(void)
{
    float a;
    float b;
    printf("Enter the first number: \n");
    a = get_float();
    printf("Enter the second number: \n");
    b = get_float();
    printf("%.2f + %.2f = %.2f\n", a, b, a+b);
}
//
void minus(void)
{
    float a;
    float b;
    printf("Enter the first number: \n");
    a = get_float();
    printf("Enter the second number: \n");
    b = get_float();
    printf("%.2f - %.2f = %.2f\n", a, b, a-b);
}
//
void times(void)
{
    float a;
    float b;
    printf("Enter the first number: \n");
    a = get_float();
    printf("Enter the second number: \n");
    b = get_float();
    printf("%.2f * %.2f = %.2f\n", a, b, a*b);
}
//
void divides(void)
{
    float a;
    float b;
    printf("Enter the first number: \n");
    a = get_float();
    printf("Enter the second number: \n");
    while( (b = get_float()) == 0.0) //被除数不能为0.0
    {
        printf("Enter a number other than 0!\n");
    }
    printf("%.2f / %.2f = %.2f\n", a, b, a/b);
}
