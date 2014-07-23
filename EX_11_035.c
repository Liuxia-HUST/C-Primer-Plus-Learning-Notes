/*
编程练习6
自己编写实现strncpy函数功能的函数，并在一个使用循环语句为这个函数提供输入的完整程序中进行测试。
strncpy(s1, s2, n)从s2复制n个字符给s1，并在必要时截断s2或为其填充额外的字符。如果s2的长度等于或
大于n，目标字符串就没有标志结束的空字符。函数返回s1.
*/

/*
不确定是否达到了要求，先将s1清空，直接把s2的前n个字符复制到s1.
*/
#include <stdio.h>
#define SIZE 81
char *mystrncpy(char *s1, char *s2, int n);
void clearstr(char *s);
int main(void)
{
    char s1[SIZE];
    char s2[SIZE];
    int n;

    puts("Enter s1:");
    while(gets(s1) != NULL)
    {
        puts("Enter s2");
        gets(s2);
        puts("Enter n");
        scanf("%d", &n);
        while(getchar() != '\n')
            continue;

        puts(mystrncpy(s1, s2, n));
        puts("Enter s1:");
    }

    return 0;
}
// ************
char *mystrncpy(char *s1, char *s2, int n)
{
    int i;
    char *start;
    start = s1;
    clearstr(s1);// 清空字符串s1
    for(i = 0; i<n; i++)
    {
        *s1 = *s2;
        s1++;
        s2++;
    }

    return start;
}
//
void clearstr(char *s)
{
    while(*s)
    {
        *s = '\0';
        s++;
    }
}
