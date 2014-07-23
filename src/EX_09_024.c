/*
编程练习9
为了使程序清单9.8中的函数to_binary()更一般化，可以在新的函数to_base_n()中使用第二个参数，
且该参数的范围从2到10。然后，这个新函数输出第一个参数在第二个参数规定的进制数下的数值结果。
例如，to_base_n(129,8)的输出是201，也就是129的八进制数值。最后在一个完整的程序中对该函数进
行测试。
*/

#include <stdio.h>

void to_bianry (unsigned long n, unsigned long m);

int main(void)
{
    unsigned long number, m;
    printf("Enter an integer (q to quit):\n");
    while (scanf("%lu", &number) == 1)
    {
        printf("Enter an integer between 2 -1 10 :\n");
        while ((scanf("%lu", &m) != 1) || m <2 || m> 10 )
        {
            printf("Invalid number. Enter an integer between 2 -1 10:\n");
            while (getchar() != '\n')
                continue;
        }
        printf("Binary equivalent: ");
        to_bianry(number, m);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done.\n");

    return 0;
}

void to_bianry(unsigned long n, unsigned long m)
{
    int r;
    r = n%m;
    if (n>=m)
        to_bianry(n/m, m);
    putchar('0' + r);

    return;
}
