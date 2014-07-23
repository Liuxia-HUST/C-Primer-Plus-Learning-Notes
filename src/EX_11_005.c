// name2.c -- 读取一个名字
// 很长的输入时将出错。
#include <stdio.h>
#define MAX 81
int main(void)
{
    char name[MAX];
    char *ptr;

    printf("Hi, what's your name?\n");
    ptr = gets(name);
    printf("%s? Ah! %s!\n", name, ptr);

    return 0;
}
