/*
编程练习11
编写一个程序。功能是读取输入，直到遇到EOF，并报告单词数、大写字母数、小写字母数、标点符号数和数字字符数。
使用ctype.h系列的函数。
*/
#include <stdio.h>
#include <ctype.h>

#define SIZE 101

int count_Words(char *str);
int count_Upper(char *str);
int count_Lower(char *str);
int count_Punct(char *str);
int count_Number(char *str);

int main(void)
{
    char str[SIZE];
    char ch;
    int words = 0;
    int Upper = 0;
    int Lower = 0;
    int Punct = 0;
    int Numbers = 0;
    int i = 0;

    puts("Enter some thing, less than 100 chars. End with Ctrl + Z.");
    while( i < SIZE-1 && (ch = getchar()) != EOF)
    {
        str[i] = ch;
        i++;
    }
    str[i] = '\0';

    puts(str);

    words = count_Words(str);
    Upper = count_Upper(str);
    Lower = count_Lower(str);
    Punct = count_Punct(str);
    Numbers = count_Number(str);

    printf("There are %d words, %d upper lettters, %d lower letters, %d punct characters and %d digit chars.\n",
           words, Upper, Lower, Punct, Numbers);


    return 0;
}

int count_Words(char *str)
{
    int ct = 0;
    int flag_pre = 0;
    int flag_now = 0;
    while( *str)
    {

        if ( isalpha(*str) )
            {
                flag_pre = flag_now;
                flag_now = 1;
            }
        else
            {
                flag_pre = flag_now;
                flag_now = 0;
            }
        if( flag_pre ==1 && flag_now == 0 )
            ct++;
        str++;
    }


    return ct;
}

int count_Upper(char *str)
{
    int ct = 0;
    while (*str)
    {
        if (isupper(*str))
            ct++;
        str++;
    }

    return ct;
}
int count_Lower(char *str)
{
    int ct = 0;
    while (*str)
    {
        if (islower(*str))
            ct++;
        str++;
    }

    return ct;
}
int count_Punct(char *str)
{
    int ct = 0;
    while (*str)
    {
        if (ispunct(*str))
            ct++;
        str++;
    }

    return ct;
}
int count_Number(char *str)
{
    int ct = 0;
    while (*str)
    {
        if (isdigit(*str))
            ct++;
        str++;
    }

    return ct;
}
