/*
PE_12_02
编程练习2
编写一个文件复制程序。程序需要从命令行获得源文件名和目的文件名。尽可能使用标准I/O和
二进制模式。
*/
#include <stdio.h>
#include <stdlib.h>
#define FILE_LEN  100

int main(int argc, char* argv[])
{
    FILE *src, *dest;
    char ch;

    if(argc < 3)
    {
        printf("Useage: $s source_file_name destination_filename.\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if( (src = fopen(argv[1], "rb")) == NULL)
    {
        printf("Can't open file %s.\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if( (dest = fopen(argv[2], "wb")) == NULL)
    {
        printf("Can't open file %s.\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    while( (ch = getc(src)) != EOF )
    {
        putc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    return 0;
}
