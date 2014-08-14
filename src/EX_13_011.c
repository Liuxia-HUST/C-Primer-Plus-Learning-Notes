/*
PE-13-05
编程练习5
修改程序清单6中的程序，使用命令行参数或者请求用户输入来获取文件名。
把多个文件的内容追加到一个文件。
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 1024
#define SLEN 81
void append (FILE *source, FILE *dest);

int main(int argc, char * argv[])
{
    FILE *fa, *fs; // fa 指向追加的目的文件，fs指向源文件
    char file_app[SLEN];
    char file_src[SLEN];
    int files = 0;

    if(argc > 1)
        strncpy(file_app, argv[1], SLEN);
    else
    {
        puts("Enter name of destination file: ");
        gets(file_app);
    }


    if ( (fa = fopen(file_app, "a")) == NULL)
    {
        fprintf(stderr, "Can't open %s.\n", file_app);
        exit(2);
    }
    if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
    {
        fputs("Can't create output buffer.\n",stderr);
        exit(3);
    }

    if(argc > 2)
    {
        for ( int i = 2; i < argc; i++)
        {
            strncpy(file_src, argv[i], SLEN);
            if(strcmp(file_src, file_app) == 0)
                fputs("Can't append file to itself.\n", stderr);
            else if ((fs = fopen(file_src, "r")) == NULL)
                fprintf(stderr, "Can't open %s\n", file_src);
            else
            {
                if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
                {
                    fputs("Can't create input buffer\n", stderr);
                    continue;
                }
                append(fs, fa);
                if( ferror(fs) != 0)
                    fprintf(stderr, "Error in reading file %s.\n", file_src);
                if( ferror(fa) != 0)
                    fprintf(stderr, "Error in writing file %s.\n", file_app);
                fclose(fs);
                files ++;
                printf("File %s appended.\n", file_src);
                puts("Next file (empty line to quit): ");
            }

        }
    }
    else
    {
        puts("Enter name of first source file (empty line to quit): ");
        while(gets(file_src) && file_src[0] != '\0')
        {
            if(strcmp(file_src, file_app) == 0)
                fputs("Can't append file to itself.\n", stderr);
            else if ((fs = fopen(file_src, "r")) == NULL)
                fprintf(stderr, "Can't open %s\n", file_src);
            else
            {
                if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
                {
                    fputs("Can't create input buffer\n", stderr);
                    continue;
                }
                append(fs, fa);
                if( ferror(fs) != 0)
                    fprintf(stderr, "Error in reading file %s.\n", file_src);
                if( ferror(fa) != 0)
                    fprintf(stderr, "Error in writing file %s.\n", file_app);
                fclose(fs);
                files ++;
                printf("File %s appended.\n", file_src);
                puts("Next file (empty line to quit): ");
            }
        }
    }


    printf("DOne. %d files appended.\n", files);
    fclose(fa);

    return 0;
}


void append(FILE *source, FILE *dest)
{
    size_t bytes;
    static char temp[BUFSIZE]; // 分配一次

    while( (bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
    {
        fwrite(temp, sizeof(char), bytes, dest);
    }
}
