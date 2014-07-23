/*
编程练习2
编写一个程序，把输入作为字符流读取，直到遇到EOF。令该程序打印每个输入字符及其ASCII编码的十进制值。
注意在ASCII序列中空格字符前面的字符是非打印字符，要处理这些特殊字符。如果非打印字符是换行符或制表符，
则分别打印\n或\t。否则，使用控制字符符号。例如，ASCII的1是Ctrl + A，可以显示为^A。注意A的ASCII值是
Ctrl + A的值加上64.对其他非打印字符也保持相似的关系。除去每次遇到一个换行符时就开始一个新行之外，每行
打印十队值。
*/
#include <stdio.h>
#include <ctype.h>

void print_ch(char ch);
int main(void)
{
    char ch;
    int count=0;

    printf("Enter some characters.\n");
    while ( (ch = getchar()) != EOF )
    {
        print_ch(ch);
        count++;
        if(count%10 == 0)
            printf("\n");
    }

    return 0;
}
void print_ch(char ch)
{
    if( ch == '\n')
        printf("\\n%3d",ch);
    else if(ch == '\t')
        printf("\\t%3d",ch);
    else if ( isprint(ch))
        printf("%2c%3d", ch, ch);
    else
        printf("^%c%3d", ch+64 ,ch);
}
