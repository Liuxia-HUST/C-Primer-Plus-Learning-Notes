// guess. -- 一个低效且错误的猜数程序
/*
#include <stdio.h>
int main(void)
{
    int guess = 1;
    printf("Pick an integer from 1 to 100. I will try go guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("uh...is your number %d?\n", guess);
    while( getchar() != 'y' )
        printf("Well, then,, is it %d\n", ++guess);
    printf("I knew I could do it!\n");

    return 0;
}
*/

// 正确版本
#include <stdio.h>
int main(void)
{
    int guess = 1;
    char respond;
    printf("Pick an integer from 1 to 100. I will try go guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("uh...is your number %d?\n", guess);
    while( (respond = getchar()) != 'y' )
        {
            if (respond == 'n')
                printf("Well, then,, is it %d\n", ++guess);
            else
                printf("Sorry, I understand only y or n.\n");
            while(getchar() != '\n')
                continue; //跳过输入行的剩余部分
        }
    printf("I knew I could do it!\n");

    return 0;
}
