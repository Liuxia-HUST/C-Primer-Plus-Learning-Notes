// lesser.c -- 找出两个整数中较小者
#include <stdio.h>
int imin(int m, int n);
int main(void)
{
    int evil1, evil2;

    printf("Enter a pair o fintegers (q to quit): \n");
    while (scanf("%d %d", &evil1, &evil2) == 2)
    {
        printf("The lesser of %d and %d is %d.\n", evil1, evil2, imin(evil1, evil2));
        printf("Enter a pair o fintegers (q to quit): \n");
    }
    printf("Bye.\n");

    return 0;
}

int imin(int m, int n)
{
    int min;

    if (m<n)
        min = m;
    else
        min = n;
    return min;
}
