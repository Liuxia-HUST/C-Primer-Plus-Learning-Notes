/*
编程练习2
编写一个程序，初始化一个double数组，然后把数组内容复制到另外两个数组（3个数组都需要在主程序中声明）。
制作第一份拷贝的函数使用数组符号。制作第二份拷贝的函数使用指针符号，并使用指针的增量操作。把目标数组
名和要复制的元素数目作为参数传递给函数。也就是说，如果给定了下列声明，函数调用应该如下面所示：
double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
double target1[5];
double target2[5];
copy_arr (source, target1);
copy_ptr (source, target2);
*/
#include <stdio.h>
void copy_arr (double ar[5], double tar_ar[5]);
void copy_ptr (double * ptr, double tar_ar[5]);
int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    int index;

    copy_arr (source, target1);
    copy_ptr (source, target2);

    printf("source arr:\n");
    for (index = 0; index < 5; index ++)
    {
        printf("source[%d] = %f\n", index, source[index]);
    }
    printf("Target1 arr:\n");
    for (index = 0; index < 5; index ++)
    {
        printf("Target1[%d] = %f\n", index, target1[index]);
    }
    printf("Target1 arr:\n");
    for (index = 0; index < 5; index ++)
    {
        printf("Target1[%d] = %f\n", index, target1[index]);
    }

}
void copy_arr (double ar[5], double tar_ar[5])
{
    int i;
    for (i = 0; i< 5; i++)
        tar_ar[i] = ar[i];

}
void copy_ptr (double * ptr, double tar_ar[5])
{
    int i;
    for (i = 0; i< 5; i++)
        tar_ar[i] = *ptr+i;

}
