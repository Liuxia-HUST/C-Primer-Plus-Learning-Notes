/*
编程练习2
修改并测试练习1中的函数，使得可以在n个字符后，或第一个空格、制表符、换行符后停止读取输入，
并由上述情况中最先被满足的那个终止读取。
*/
#include <stdio.h>
#include <ctype.h>
#define SIZE 81
void get_line(char *str, int n);
int main( void)
{
    char line[SIZE];
    int n = 8;

    get_line(line, n);
    puts(line);


    return 0;
}
void get_line(char *str, int n)
{
    int i = 0;
    while(   i < n  )
    {
        *(str + i) = getchar();
        if( isspace(*(str + i)) )
            break;
        i++;
    }
    *(str + i) = '\0';

}
