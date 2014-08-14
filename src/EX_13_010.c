/*
PE_13_04
编程练习4
编写一段程序，依次在屏幕上显示命令行中列出的全部文件。使用argc控制循环。
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    int i;

    for(i = 1; i < argc; i++)
        printf("%s\n", argv[i]);

    return 0;
}
