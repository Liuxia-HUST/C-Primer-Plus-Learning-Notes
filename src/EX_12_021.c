/*
编程练习7
编写一个程序，该程序与我们在显示程序清单12.13的输出之后所讨论的修改版程序具有相同表现。
也就是说，输出应该像下面这样：
Enter the number of sets: enter q to stop.
18
How many sides and how many dice?
6 3
Here are 18 sets of 3 6-sided throws.
    12 10 6 9 14 8 15 9 14 12 17 11 7 10
    13 8 14
How many sets? Enter q to stop.
q
*/

#include <stdio.h>
#include <stdlib.h> // 为srand()提供原型
#include <time.h> // 为time()提供原型

int roll_n_dice (int dice, int sides);

int main(void)
{
    int dice;
    int sets;
    int sides;
    int * ptd;

    srand((unsigned int) time(0)); // 随机化rand（）函数
    printf("Enter the number of sets: enter q to stop.\n");
    while(scanf("%d", &sets) == 1 && sets > 0)
    {
        ptd = (int *)malloc(sets * sizeof(int));
        if (ptd == NULL)
        {
            puts("Memory allocation failed. Goodbye.");
            exit(EXIT_FAILURE);
        }

        printf("How many sides and how many dice?\n");
        scanf("%d%d", &sides, &dice);
        printf("Here are %d sets of %d %d-sided throws.\n", sets, dice, sides);

        for(int i = 0; i < sets; i++)
        {
            ptd[i] = roll_n_dice(dice, sides);
            printf("%4d", ptd[i]);
        }
        putchar('\n');

        printf("How many sets? Enter q to stop.\n");

    }

    printf("GOOD FORTUNE TO YOU!\n");

    return 0;
}


// diceroll.c -- 掷骰子的模拟程序


int rollem(int sides)
{
    int roll;

    roll = rand() % sides + 1;

    return roll;
}

int roll_n_dice(int dice, int sides)
{
    int d;
    int total = 0;
    if( sides < 2)
    {
        printf("Need at least 2 sides.\n");
        return -2;
    }
    if( dice < 1)
    {
        printf("Need at least 1 dice.\n");
        return -1;
    }

    for(d = 0; d < dice; d++)
        total += rollem(sides);

    return total;
}
