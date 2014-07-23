/*
编程练习13
编写一个计算乘幂的基于命令行的程序。第一个命令行参数为double类型数，作为幂的底数；
第二个参数为整数，作为幂的指数。
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argv, char *argc[])
{
    int aIntVar;
    double aDoubleVar;
    double x = 1.0;

    aDoubleVar = atof(argc[1]);
    aIntVar = atoi(argc[2]);
    //x = pow(aDoubleVar, aIntVar);
    for ( int i = 0; i < abs(aIntVar); i++)
    {
        if ( aIntVar >0)
            x *= aDoubleVar;
        else if(aIntVar < 0)
            x /= aDoubleVar;
        else
            x = 1.0;
    }

    printf("%f ^ %d = %f\n", aDoubleVar, aIntVar, x);
    return 0;
}
