/*
编程练习4
编写一个函数，它返回函数自身被调用的次数，并在一个循环内测试之。
*/
#include <stdio.h>
int count = 0;
int func(void);
int main(void)
{
    int i;
    int ct = 0;
    for (i = 0; i < 10; i++)
        ct = func();
    printf("function has been called %d times.", ct);

    return 0;
}

int func(void)
{
    count ++;
    return count;
}
