/*
15编程练习
编写一个程序，其功能是读取输入，直到文件结尾，并把文件显示出来。要求程序可以识别并执行下面的命令行参数：
-p  按照原样显示输入
-u  把输入全部转换为大写
-l  把输入全部转换为小写
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define SIZE 101
int main(int argv, char *argc[])
{
    char ch;
    //while( (ch = getchar()) != EOF )
    char filename[SIZE];
    puts("Input File name and path.");
    gets(filename);
    FILE *fp;
    if( (fp = fopen(filename, "r")) == NULL)
       {
            printf("Can't open file.\n");
            exit(1);
       }
//    if( argv <= 1 )
//    {
//        printf("Parameter not specified.\n");
//        fclose(fp);
//        exit(1);
//    }
    while( (ch = getc(fp)) != EOF )
    {
        if( argv <= 1 )
            putchar(ch);
        else if ( strcmp(argc[1], "-p") == 0)
        {
            putchar(ch);
        }
        else if ( strcmp(argc[1], "-u")  == 0 )
        {
            ch = toupper(ch);
            putchar(ch);
        }
        else if ( strcmp(argc[1], "-l")  == 0 )
        {
            ch = tolower(ch);
            putchar(ch);
        }
        else
        {
            putchar(ch);
            exit(-1);
        }
    }

    fclose(fp);

    return 0;
}
