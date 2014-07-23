/* 习题7
编写一个程序，要求用户输入行驶的英里数和消耗汽油的加仑数。接着应该计算和显示消耗每加仑汽油行驶的英里数，
显示方式是在小数点右侧显示一个数字。然后，根据1加仑约等于3.785升，1英里约等于1.609公里的规则，它应该把
每加仑英里数换算成每100公里的升数并显示结果，显示方式是在小数点右侧显示一个数字。
用符号常量表示两个转换系数。使用const或#define。
*/
#include <stdio.h>
#define GAL_TO_LITER 3.785
int main(void)
{
    const float Mile_to_km = 1.609;
    float gal, miles, km, liter;

    printf("Enter your miles:\n");
    scanf("%f", &miles);
    printf("Enter your gal:\n");
    scanf("%f", &gal);
    printf("%f gal/mile\n", gal/miles);

    km = Mile_to_km * miles;
    liter = GAL_TO_LITER * gal;
    printf("%f km/liter\n", km/liter);


    return 0;
}
