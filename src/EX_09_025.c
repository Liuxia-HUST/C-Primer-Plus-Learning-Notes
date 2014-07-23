/*
编程练习10
编写并测试一个函数Fibonacci()，在该函数中使用循环代替递归来完成斐波那契数列的计算。
*/
#include <stdio.h>

unsigned long Fibonacci(unsigned long n);

int main(void)
{
    unsigned long num;

    printf("Enter an integer (q to quit):\n");
    while (scanf("%lu", &num) == 1)
    {
        printf("The %u number of Fibonacci: %u" , num, Fibonacci(num));
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done.\n");

    return 0;
}

unsigned long Fibonacci(unsigned long n)
{
    unsigned long f = 1;
    unsigned long f_pre_1 = 1;
    unsigned long f_pre_2 = 1;

    if (n>2)
        for (unsigned long i = 2; i< n; i++)
        {
            f = f_pre_1 + f_pre_2;
            f_pre_2 = f_pre_1;
            f_pre_1 = f;
        }
    else
        f = 1;

    return f;
}
