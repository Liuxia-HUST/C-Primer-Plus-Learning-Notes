// parrot.c -- 使用fgets() fputs()函数
// fgets()不丢弃换行符，fputs()不添加换行符，与gets()和puts()有所不同
#include <stdio.h>
#define MAXLINE 20
int main(void)
{
    char line[MAXLINE];

    while(fgets(line, MAXLINE, stdin) != NULL && line[0] != '\n')
        fputs(line, stdout);

    return 0;
}
