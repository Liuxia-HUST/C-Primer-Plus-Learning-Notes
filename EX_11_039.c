/*
编程练习10
编写一个程序，读取输入，直到读入了10个字符串或遇到EOF，由二者中最先被满足的那个终止读取过程。
这个程序可以为用户提供一个有5个选项的菜单：输出初始字符串列表、按ASCII顺序输出字符串、按长度
递增顺序输出字符串、按字符串中第一个单词的长度输出字符串和退出。菜单可以循环，直到用户输入退
出请求。当然，程序要能真正完成菜单中的功能。
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 101
#define LIM 10
int first_word_len(char *str);
void display(char *str[], int n);
void strsort(char *strings[], int num);
void strsort_by_length(char *strings[], int num);
void strsort_by_first_word_length(char *strings[], int num);
int main(void)
{
    char str[LIM][SIZE];
    char *ptstr[LIM];// 指针数组，用于保存每个字符串的地址。
    char *str_for_sort[LIM];// 指针数组，用于排序字符串的地址。
    int i = 0;
    int ct = 0;
    char choice;
    // Input, count the length of every string and the length of the first word of every string
    while ( (i < 10) && (gets(str[i]) != NULL ))
    {
        ptstr[i] = str[i];
        i++;
        ct++;
    }
// menu
    puts("Enter a, b, c or d to choose what you want to do, q to quit.");
    puts("a) Display the original strings.");
    puts("b) Display the strings by the order of alphet.");
    puts("c) Display the strings by length, ascendingly.");
    puts("d) Display the strings by the length of first word.");
    puts("q) Quit.");
//
    while ( (choice = getchar()) != 'q')
    {
        while( getchar() != '\n' )
            continue;
        choice = toupper(choice);
        switch(choice)
        {
        case 'A':
            display(ptstr, ct);
            puts("Enter a, b, c or d to choose what you want to do, q to quit.");
            break;
        case 'B':
            for(i = 0; i < ct; i++)
                str_for_sort[i] = ptstr[i];
            strsort(str_for_sort, ct);
            display(str_for_sort, ct);
            puts("Enter a, b, c or d to choose what you want to do, q to quit.");
            break;
        case 'C':
            for(i = 0; i < ct; i++)
                str_for_sort[i] = ptstr[i];
            strsort_by_length(str_for_sort, ct);
            display(str_for_sort, ct);
            puts("Enter a, b, c or d to choose what you want to do, q to quit.");
            break;
        case 'D':
            for(i = 0; i < ct; i++)
                str_for_sort[i] = ptstr[i];
            strsort_by_first_word_length(str_for_sort, ct);
            display(str_for_sort, ct);
            puts("Enter a, b, c or d to choose what you want to do, q to quit.");
            break;
        default:
            puts("Input Invalid! Please enter a, b, c, d, q to quit.");
            break;
        }

    }

    //display_by_len(ptstr, ct);

    return 0;
}

// function 1
int first_word_len(char *str)
{
    int i = 0;
    // skip the char that is not a~z or A~Z
    while(!isalpha(*str))
    {
        str++;
        continue;
    }
    // count how many chars the first word has.
    while(isalpha(*str))
    {
        i++;
        str++;
    }

    return i;

}

void display(char *str[], int n)
{
    int i;
    for ( i = 0; i< n; i++)
        puts(str[i]);
}


void strsort(char *strings[], int num)
{
    char *temp;
    int top, seek;

    for ( top = 0; top < num-1; top++)
        for ( seek = top +1; seek < num; seek++)
            if ( strcmp(strings[top], strings[seek]) > 0)
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
}

void strsort_by_length(char *strings[], int num)
{
    char *temp;

    int top, seek;

    for ( top = 0; top < num-1; top++)
        for ( seek = top +1; seek < num; seek++)
            if ( strlen(strings[top]) > strlen(strings[seek]) )
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
}

void strsort_by_first_word_length(char *strings[], int num)
{
    char *temp;

    int top, seek;

    for ( top = 0; top < num-1; top++)
        for ( seek = top +1; seek < num; seek++)
            if ( first_word_len(strings[top]) > first_word_len(strings[seek]) )
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
}
