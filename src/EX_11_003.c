// p_and_s.c -- 指针和字符串
// 复制的仅仅是地址。
#include <stdio.h>
int main(void)
{
    char * mesg = "Don/t be a fool!";
    char * copy;

    copy = mesg;
    printf("%s\n", copy);
    printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);
    printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);

    return 0;
}
