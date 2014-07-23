// bounds.c -- 超出数组的边界
#include <stdio.h>
#define SIZE 4
int main(void)
{
    int value1 = 44;
    int arr[SIZE];
    int value2 = 88;
    int i;

    printf("Value1 = %d, value2 = %d\n", value1, value2);
    for ( i = -1; i<=SIZE; i++)
    {
        arr[i] = 2*i + 1;
    }
    for ( i = -1; i< 7; i++)
    {
        printf("%2d %d\n", i, arr[i]);
    }
    printf("Value1 = %d, value2 = %d\n", value1, value2);

    return 0;
}