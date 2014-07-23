/*
编程练习4
编写一个程序，把输入如作为字符流读取，直到遇到EOF。令其报告每个单词的平均字母数。不要把空白字符记为单词中的字母。
实际上，标点符号也不应该计算，但现在不必考虑这一点（如果你想做得好一些，可以考虑使用ctype.h系列中的ispunct()函数）。
*/
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch, ch_pre;
    int cr_count = 0;
    int word_count = 0;
    ch_pre = EOF;
    while ( (ch = getchar()) != EOF)
    {
        if ( isalpha(ch) )
        {
            cr_count++;
            if ( ! isalpha(ch_pre) )
            word_count++;
        }

        ch_pre = ch;
    }

    printf("There are %d characters and %d words. %.2f chars per word on average.\n", cr_count, word_count, (float)cr_count/word_count);
    return 0;
}
