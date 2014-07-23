// quit_chk.c -- 某程序的开始
#include <stdio.h>
#include <string.h>
#define SIZE 81
#define LIM 100
#define STOP "quit"
int main(void)
{
    char input[LIM][SIZE];
    int ct = 0;

    printf("Enter up to %d lines (type quit to quit) \n", LIM);
    while(ct < LIM && gets(input[ct]) != NULL && strcmp(input[ct], STOP) != 0) // input[ct][0]!='\0'检测空行输入
    {
        ct++;
    }
    printf("%d strings entered.\n", ct);

    return 0;
}