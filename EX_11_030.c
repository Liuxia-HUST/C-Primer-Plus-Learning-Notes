/*
编程练习1
设计并测试一个函数，可以从输入读取n个字符（包括空格、制表符和换行符），把结果存储在一个数组中，
这个数组的地址通过参数来传递。
*/
#include <stdio.h>
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
    while(  i < n )
    {
        *(str + i) = getchar();
        i++;
    }
    *(str + i) = '\0';

}
