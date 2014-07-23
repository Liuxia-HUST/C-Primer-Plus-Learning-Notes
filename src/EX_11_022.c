// copy2.c -- strcpy()示例程序2
#include <stdio.h>
#include <string.h>
#define WORDS "beast"
#define SIZE 40

int main(void)
{
    char *orig = WORDS;
    char copy[SIZE] = "Be the best that you can be.";
    char * ps;

    puts(orig);
    puts(copy);
    ps = strcpy(copy+7, orig);// 将orig复制到copy字符串的第8个字符后并覆盖。ps指向copy的第8个元素的位置。
    puts(copy);
    puts(ps);

    return 0;
}
