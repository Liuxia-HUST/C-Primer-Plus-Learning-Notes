/*
PE-13-06
编程练习6
使用命令行参数的程序要求用户记住正确的使用方法。重写清单13.2中的程序，
不实用命令行参数，而是提示用户键入所需的信息。
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 41
int main(void)
{
    FILE *in, *out;
    int ch;
    char name[LEN];
    int count = 0;

    puts("Enter the filename for input: ");
    gets(name);

    if((in = fopen(name, "r")) == NULL)
    {
        fprintf(stderr, "I can't open file \"%s\" for input.\n", name);
        exit(1);
    }
    strcat(name, ".red");
    if((out = fopen(name, "w")) == NULL)
    {
        fprintf(stderr, "I can't open file \"%s\" for output.\n", name);
        exit(2);
    }
    // copy data
    while( (ch = getc(in)) != EOF)
        if((count++) %3 == 0)
            putc(ch, out);
    //
    if( fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, "Error in closing files!\n");

    return 0;
}
