/*
编程练习7
编写一个函数string_in()，它接受两个字符串指针参数。如果第二个字符串被包含在第一个字符串中，函数就返回被包含
的字符串开始的地址。例如，string_in("hats", "at")返回hats中a的地址。否则，函数返回空指针。
在一个使用循环语句为这个函数提供输入的完整语句中进行测试。
*/

/*
只能判断是否相等。2014-7-11
*/
#include <stdio.h>
#define SIZE 81
char *string_in(char *s1, char *s2);
int main(void)
{
    char s1[SIZE];
    char s2[SIZE];

    puts("Enter s1:( Ctrl + Z to quit.)");
    while (gets(s1) != NULL)
    {
        puts("Enter s2:");
        gets(s2);
        if( string_in(s1, s2) )
            puts(" s2 in s1 "  );
        else
            puts("s2 not in s1");
        puts("Enter s1:( Ctrl + Z to quit.)");
    }

    return 0;
}
char *string_in(char *s1, char *s2)
{
    int len1 = 0;//s1的字符个数，不含 '\0'
    int len2 = 0;
    int i, j;
    char *s_start_1;
    char *s_start_2;
    s_start_1 = s1;
    s_start_2 = s2;

    while(*s_start_1)
        {
            len1++;
            s_start_1++;
        }
    while(*s_start_2)
        {
            len2++;
            s_start_2++;
        }
/*
遍历s1，若s1中有字符与s2开头的字符相同，则逐一比对s2接下的字符。
*/
    for(i = 0; i < len1; i++)
    {
        if(*s2 == *(s1 + i))
            {
                for (j = 1; j < len2; j++)
                    if ( *(s2 + j) == *(s1 + i +j))
                        return (s1+i);
            }
    }

    return NULL;
}
