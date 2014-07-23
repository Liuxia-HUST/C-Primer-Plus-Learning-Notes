/*
编程练习12
编写一个程序，按照相反的单词顺序显示命令行参数。即，如果命令行参数是see you later，程序的显示应该为later you see。
*/
#include <stdio.h>

int main(int argv, char *argc[])
{
    int count;
    for (count = argv -1; count > 0; count--)
        printf("%s\n", argc[count]);
    printf("\n");

    return 0;
}
