/*
PE_12_01
修改程序清单13.1中的程序，使之不采用命令行参数，而是请求用户输入文件名
并读入用户的响应。
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char filename[FILENAME_MAX];
    FILE * fp;
    int ch;
    long count = 0;

    puts("Enter file name: ");
    gets(filename);

    if( (fp = fopen(filename, "r")) == NULL)
    {
        printf("Can't open file.\n");
        exit(EXIT_FAILURE);
    }
    while( (ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("File %s has %ld characters.\n", filename, count);

    return 0;
}
