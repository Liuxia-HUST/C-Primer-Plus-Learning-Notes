// format.c -- 格式化一个字符串
#include <stdio.h>
#define MAX 20

int main(void)
{
    char first[MAX];
    char last[MAX];
    char forma1[2*MAX +10];
    double prize;

    puts("Enter your first name: ");
    gets(first);
    puts("Enter your last name: ");
    gets(last);
    puts("Enter your prize money: ");
    scanf("%lf", &prize);
    sprintf(forma1, "%s, %-19s: $%6.2f\n", last, first, prize);
    puts(forma1);

    return 0;
}
