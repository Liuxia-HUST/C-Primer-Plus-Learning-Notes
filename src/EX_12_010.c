// r_drive2.c -- 测试函数rand1()和srand1()
// 与s_and_r.c 一起编译
#include <stdio.h>
extern void srand1(unsigned int x);
extern int rand1(void);
int main(void)
{
    int count;
    unsigned seed;

    printf("Please enter your choice for seed.\n");
    scanf("%u", &seed);
    srand1(seed);// 重置种子
    for(count = 0; count < 5; count++)
    {
        printf("%hd\n", rand1());
    }

    return 0;±

}
