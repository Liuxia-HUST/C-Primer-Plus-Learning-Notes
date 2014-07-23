/*
编程练习7
利用练习2中的复制函数，把一个包含7个元素的数组内第3到第5元素复制到一个包含3个元素的数组中。
函数本身不需要修改，只需要选择合适的实际参数（实际参数不需要是数组名和数组大小，而只需是数
组元素的地址和需要复制的元素数目）。
*/
#include <stdio.h>
#define SIZE 7

void copy_ptr (double *ptr1, double *ptr2, int n);
void displayArrary(double ar[], int n);
int main(void)
{

    double x[SIZE] = {0, 1, 2, 3, 4, 5, 6};
    double y[3];
    displayArrary(x, SIZE);
    copy_ptr(&x[2], &y[0], 3);
    displayArrary(y, 3);

    return 0;

}

void copy_ptr (double *ptr1, double *ptr2, int n)
{
    int i;
    for (i = 0; i< n; i++)
        *(ptr2+i) = *(ptr1+i);

}

void displayArrary(double ar[], int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
        printf("%6.2f ", ar[i]);

    printf("\n");
}
