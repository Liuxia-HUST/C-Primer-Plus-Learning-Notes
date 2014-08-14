/*
编程练习8
下面是某程序的一部分：
#include <stdio.h>
int * make_array (int elem, int val);
void show_array (const int ar[], int n);
int main(void)
{
    int * pa;
    int size;
    int value;

    printf("Enter the number of elements: ");
    scanf("%d", &size);
    while (size > 0)
    {
        printf("Enter the initialization value: ");
        scanf("%d", &value);
        pa = make_array(size, value);
        if(pa)
        {
            show_array(pa, size);
            free(pa);
        }
        printf("Enter the number of elements (<1 to quit): ");
        scanf("%d", &size);
    }

    printf("Done.\n");

    return 0;
}

*/
#include <stdio.h>
#include <stdlib.h>
int * make_array (int elem, int val);
void show_array (const int ar[], int n);
int main(void)
{
    int * pa;
    int size;
    int value;

//    printf("Enter the number of elements: ");
//    scanf("%d", &size);
//    while (size > 0)
//    {
//        printf("Enter the initialization value: ");
//        scanf("%d", &value);
//        pa = make_array(size, value);
//        if(pa)
//        {
//            show_array(pa, size);
//            free(pa);
//        }
//        printf("Enter the number of elements (<1 to quit): ");
//        scanf("%d", &size);
//    }

    printf("Enter the number of elements: ");
    while ( scanf("%d", &size) == 1 && size > 0)
    {
        printf("Enter the initialization value: ");
        scanf("%d", &value);
        pa = make_array(size, value);
        if(pa)
        {
            show_array(pa, size);
            free(pa);
        }
        printf("Enter the number of elements (<1 to quit): ");
        //scanf("%d", &size);
    }

    printf("Done.\n");

    return 0;
}


int * make_array (int elem, int val)
{
    int * ptd;
    int i;

    ptd = (int *) malloc(elem * sizeof(int));
    if(ptd == NULL)
    {
        printf("Memory alloction failed.\n");
        exit(EXIT_FAILURE);
    }

    for(i = 0; i < elem; i++)
    {
        ptd[i] = val;
    }

    return ptd;
}

void show_array (const int ar[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%4d", ar[i]);
        if( (i+1) % 8 == 0)
            putchar('\n');
    }
    putchar('\n');
}
