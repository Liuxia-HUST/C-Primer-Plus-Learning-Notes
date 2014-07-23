// put2.c -- 打印一个字符串，并统计其中的字符个数
#include <stdio.h>
int put2 (const char * string);

int main(void)
{
    char ch[] = "I don't know.";
    printf("I count %d characters.\n", put2(ch));// 先执行put2函数，故先打印字符串。

    return 0;
}

int put2 (const char * string)
{
    int count = 0;
    while (*string)
    {
        putchar(*string++);
        count++;
    }
    putchar('\n'); // 换行符不统计在内

    return (count);
}
