/*
编程练习14
使用字符分类函数实现atoi()函数
*/
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define SIZE 101

int my_atoi(const char *str);
int main(void)
{
    int aIntVar;
    char str[SIZE];

    puts("Enter a number.");
    gets(str);
    aIntVar = my_atoi(str);
    printf("%s is %d\n", str, aIntVar);

    return 0;
}

int my_atoi(const char *str)
{
    int total = 0;
    char sign;
    bool Valid = false;

    while( isspace(*str) )
        str++;

    if (*str == '+' || *str == '-')
        {
            sign = *str;
            str++;
        }

    while(isdigit(*str))
    {
        Valid = true;
        total = 10*total + (*str - '0');
        str++;
    }

    if (!Valid)
        {
            puts("Invalid Input");
            return 0;
        }

    if(sign == '-')
        return -total;
    else
        return total;
}
