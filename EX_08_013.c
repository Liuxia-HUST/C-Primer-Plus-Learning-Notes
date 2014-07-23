/*
编程练习5
修改清单8.4中的猜测程序，使其使用更智能的猜测策略。例如，程序最初猜50，让其询问用户该猜测值
是大、小还是正确。如果该猜测值小，则令下一次猜测值为50和100的中值，也就是75.如果75大，则下一
次猜测值为75和50的中值，等等。使用这种二分搜索策略，起码如果用户没有欺骗，该程序很快会获得正
确答案。
*/
#include <stdio.h>
int main(void)
{
    int up = 100;
    int low = 1;
    char respond;
    printf("Pick an integer from 1 to 100. I will try go guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan s if it is smaller\nan b if it is bigger\n");
    printf("uh...is your number %d?\n", (up + low)/2);
    while( (respond = getchar()) != 'y' )
        {
            if (respond == 's')
            {
                up = (up + low)/2;
                printf("Well, then, is it %d\n", (up + low)/2);
            }
            else if (respond == 'b')
            {
                low = (up + low)/2;
                printf("Well, then, is it %d\n", (up + low)/2);
            }
            else
                printf("Sorry, I understand only y or n.\n");
            while(getchar() != '\n')
                continue; //跳过输入行的剩余部分
        }
    printf("I knew I could do it!\n");

    return 0;
}
