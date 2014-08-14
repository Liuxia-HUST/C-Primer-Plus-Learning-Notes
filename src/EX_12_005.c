// parta.c -- 各种存储类
// accumulate定义在partb.c文件中
// 编译时需要采用多文件编译 gcc EX_12_005.c EX_12_006.c -0 EX.out
#include <stdio.h>
void report_count();
void accumulate (int k);
int count = 0;  // 文件作用域，外部链接
int main(void)
{
    int value;
    register int i; // 寄存器变量

    printf("Enter a positive integer (0 to quit): ");
    while( scanf("%d", &value) == 1 && value > 0)
    {
        ++count;
        for(i = value; i >= 0; i--)
        {
            accumulate(i);
        }
        printf("Enter a positive integer (0 to quit): ");
    }
    report_count();

    return 0;
}

void report_count()
{
    printf("Loop executed %d times\n", count);
}
