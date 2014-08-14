/*
编程练习2
在美国通常是以英里每加仑来计算油耗，在欧洲是以每百公里来计算。下面是某程序的一部分，该程序让用户选择一个模式（公制或美制的），
然后收集数据来就算油耗。

//pe12-x1.c
#include <stdio.h>
#include "pe12-2a.h"
int main(void)
{
    int mode;

    printf("Enter 0 for metric mode, 1 for US mode: ");
    scanf("%d", &mode);
    while(mode >= 0)
    {
        set_mode (mode);
        get_info();
        show_info();
        printf("Enter 0 for metric mode, 1 for US mode");
        printf("(-1 to quit):");
        scanf("%d", &mode);
    }
    printf("Done.\n");

    return 0;
}

如果用户键入了不正确的模式，程序向用户给出提示信息并选取最接近的模式。请提供一个头文件pe12-2a.h和源代码文件pe12-2a.c，来使程序
可以运行。源文件应定义3个具有文件作用域、内部链接的变量。一个代表模式，一个代表距离，还有一个代表消耗的燃料。函数get_info()根据
模式设置提示输入相应的数据，并将用户的回答存入文件作用域变量。函数show_info()根据所选的模式计算并显示燃料消耗值。
*/
#include <stdio.h>

static int _mode;
static double distance;
static double fuel;

void set_mode(int mode);
void get_info(void);
void show_info(void);


int main(void)
{
    int mode;

    printf("Enter 0 for metric mode, 1 for US mode: ");
    scanf("%d", &mode);
    while(mode >= 0)
    {
        set_mode (mode);
        get_info();
        show_info();
        printf("Enter 0 for metric mode, 1 for US mode");
        printf("(-1 to quit):");
        scanf("%d", &mode);
    }
    printf("Done.\n");

    return 0;
}
void set_mode(int mode)
{
    if(mode == 0)
        _mode = 0;
    else if(mode == 1)
        _mode = 1;
    else
    {
        printf("Invalid mode specified. Mode 1(US) used.\n");
        _mode = 1;
    }
}

void get_info(void)
{
    if(_mode == 0)
    {
        printf("Enter distance traveled in kilometers: ");
        scanf("%lf", &distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%lf", &fuel);
    }
    else if(_mode == 1)
    {
        printf("Enter distance traveled in miles: ");
        scanf("%lf", &distance);
        printf("Enter fuel consumed in gallons: ");
        scanf("%lf", &fuel);
    }

}
void show_info(void)
{
    if(_mode == 0)
    {
        printf("Fuel consumption is %.2f liters per 100km.\n", fuel*100/distance);
    }
    else
    {
        printf("Fuel consumption is %.2f miles per gallon.\n", distance/fuel);
    }
}
