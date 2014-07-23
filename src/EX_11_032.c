/*
编程练习3
设计并测试一个函数，其功能是读取输入行里的第一个单词到数组，并丢掉该行中其他的字符。一个单词的定义是一串字符，
其中不含空格、制表符和换行符。
*/
#include <stdio.h>
#include <ctype.h>
#define SIZE 81
void get_word(char *s);
int main(void)
{

    char word[SIZE];
    get_word(word);
    puts(word);

    return 0;
}
void get_word(char *s)
{
    int i = 0;
    char ch;
// 跳过行前可能的空格。
    while( isspace(ch = getchar()))
        continue;
    *(s+i) = ch;
    i++;

    while( !isspace(ch = getchar()))
    {
        *(s+i) = ch;
        i ++;
    }

    *(s + i) = '\0';

}
