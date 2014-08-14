/*
编程练习3
重新设计练习2中的程序，使它仅使用自动变量。程序提供相同的用户界面，也就是说，要提示用户输入模式等等。
然而，您还必须给出一组不同的函数调用。
*/
#include <stdio.h>



void set_mode(int * mode);
double get_fuel(int mode);
double get_dist(int mode);
void show_info(int mo, double fu, double dis);


int main(void)
{

    double distance;
    double fuel;
    int mode;

    printf("Enter 0 for metric mode, 1 for US mode: ");
    scanf("%d", &mode);
    while(mode >= 0)
    {
        set_mode (&mode);
//        get_info(mode, fuel, distance);
        distance = get_dist(mode);
        fuel = get_fuel(mode);
        show_info(mode, fuel, distance);
        printf("Enter 0 for metric mode, 1 for US mode");
        printf("(-1 to quit):");
        scanf("%d", &mode);
    }
    printf("Done.\n");

    return 0;
}
void set_mode(int *mode)
{
    if( *mode == 0)
        *mode = 0;
    else if(*mode == 1)
        *mode = 1;
    else
    {
        printf("Invalid mode specified. Mode 1(US) used.\n");
        *mode = 1;
    }
}

double get_fuel(int mode)
{
    double fuel;
    if(mode == 0)
    {
        printf("Enter fuel consumed in liters: ");
        scanf("%lf", &fuel);
    }
    else if(mode == 1)
    {
        printf("Enter fuel consumed in gallons: ");
        scanf("%lf", &fuel);
    }
    return fuel;
}

double get_dist(int mode)
{
    double dist;
    if(mode == 0)
    {
        printf("Enter distance traveled in kilometers: ");
        scanf("%lf", &dist);
    }
    else if(mode == 1)
    {
        printf("Enter distance traveled in miles: ");
        scanf("%lf", &dist);
    }
    return dist;
}

void show_info(int mode, double fuel, double distance)
{
    if(mode == 0)
    {
        printf("Fuel consumption is %.2f liters per 100km.\n", fuel*100/distance);
    }
    else
    {
        printf("Fuel consumption is %.2f miles per gallon.\n", distance/fuel);
    }
}
