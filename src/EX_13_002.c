// reducto.c -- 把您的文件压缩为原来的三分之一
#include <stdio.h>
#include <stdlib.h> // exit()
#include <string.h> // strncpy() strcat()

#define LEN 40
int main(int argc, char *argv[])
{
    FILE *in, *out;
    int ch;
    char name[LEN];// store file name
    int count = 0;

    // check cmd line argc
    if(argc < 2)
    {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        exit(1);
    }

    // input
    if( (in = fopen(argv[1], "r")) == NULL )
    {
        fprintf(stderr, "I couldn't open the file \"%s\".\n", argv[1]);
        exit(2);
    }

    // output
    strncpy(name, argv[1], LEN); // copy file name to arrary.
    strcat(name, ".red");  // add .red to file name.
    if( (out = fopen(name, "w")) ==NULL )
    {
        fprintf(stderr, "Can't create output file.\n");
        exit(3);
    }

    //copy data
    while( (ch = getc(in)) != EOF)
    {
        if (count++ % 3 ==0)
            putc(ch, out); // print every 3 char
    }

    // 收尾
    if ( fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, "Error in closing files\n");

    return 0;
}
