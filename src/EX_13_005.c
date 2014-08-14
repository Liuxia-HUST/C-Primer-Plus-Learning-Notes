// reverse.c -- 反序显示一个文件
#include <stdio.h>
#include <stdlib.h>
#define CNTL_Z '\032' // DOS 文本文件中的文件结尾标记
#define SLEN 50
int main(void)
{
    char file[SLEN];
    char ch;
    FILE *fp;
    long count, last;

    puts("Enter the name of the file to be processed: ");
    gets(file);// 存在存储溢出危险，当输入的字符数超过line所能容纳的时候。
    if( (fp = fopen(file, "rb")) == NULL )
    {
        //只读和二进制模式
        printf("reverse can't open %s\n", file);
        exit(1);
    }
    fseek(fp, 0L, SEEK_END);// 定位到文件尾部
    last = ftell(fp);
    for(count = 1L; count <= last; count++)
    {
        fseek(fp, -count, SEEK_END); //回退
        ch = getc(fp);
        // for DOS, wors for UNIX too
        if (ch != CNTL_Z && ch != '\r')
            putchar(ch);
        // for Macintosh
        /*
        if( ch == 'r')
            putchar('\n');
        else
            putchar(ch);
        */
    }
    putchar('\n');
    fclose(fp);

    return 0;
}
