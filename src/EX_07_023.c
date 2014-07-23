/*
编程练习11
ABC Mail Order Grocery朝鲜蓟的售价是1.25美元/磅，甜菜的售价是0.65美元/磅，胡萝卜0.89$/pound。
在添加运输费用之前，他们为100美元的订单提供5%的打折优惠。对5磅或以下的订单收取3.50美元的运输和装卸费用；
超过5磅而不足20磅的订单收取10.00美元的运输和装卸费用；20磅或以上的运输，在8美元基础上每磅加收0.1美元。
编写程序，在循环中使用switch语句，以遍对输入a的响应是让用户输入所需的朝鲜蓟磅数，b为甜菜的磅数，c为胡萝
卜的磅数，而q允许用户退出订购过程。然后程序计算总费用 、折旧和运输费用（如果有运输费用的话），以及总数。
随后程序应该显示所有的购买信息：每磅的费用、订购的磅数、该订单每种蔬菜的费用、订单的总费用、折扣，如果
有的话加上运输费用，以及所有费用的总数。
*/
#include <stdio.h>
void compute(float *number_a, float *number_b, float *number_c);
int main(void)
{
	char kind;
	int status;
	float number_artichokes, number_sugarbeets, number_carrots;
	number_artichokes = number_sugarbeets = number_carrots = 0.0;
    //status = 1;
    do
    {
        printf("Enter a or b or c to choose the kind of vegetable you want to buy.(q to quit)\n");
        status = (scanf("%c", &kind));
        switch(kind)
        {
        case 'a':
            printf("Enter the number of number_artichokes you want to buy:\n");
            scanf("%f", &number_artichokes);
            //printf("You have choode to buy %f pounds of artichokes.\n", number_artichokes);
            while(getchar() != '\n') // 换行符起到刷新缓存区的作用，此处消除换行符的影响
                continue;

            break;
        case 'b':
            printf("Enter the number of number_sugarbeets you want to buy:\n");
            scanf("%f", &number_sugarbeets);
            //printf("You have choode to buy %f pounds of sugarbeets.\n", number_sugarbeets);
            while(getchar() != '\n')
                continue;
            break;
        case 'c':
            printf("Enter the number of number_carrots you want to buy:\n");
            scanf("%f", &number_carrots);
            //printf("You have choode to buy %f pounds of carrots.\n", number_carrots);
            while(getchar() != '\n')
                continue;
            break;
        case 'q':
            status = -1;
            break;
        default:
            status = -1;
            break;
        }
    }while( status == 1);
    printf("You have choose to buy %.2f artichokes, %.2f sugarbeets and %.2f carrots.\n", number_artichokes, number_sugarbeets,number_carrots);

    compute(&number_artichokes, &number_sugarbeets, &number_carrots);

    printf("Done\n");
    return 0;
}
void compute(float *number_a, float *number_b, float *number_c)
{
// cost and discount;
    float price_a = 1.25;
    float price_b = 0.65;
    float price_c = 0.89;
    float discountrate = 0.05;
    float cost_a, cost_b, cost_c, sum_cost, discount;
    cost_a = price_a*(*number_a);
    cost_b = price_b*(*number_b);
    cost_c = price_c*(*number_c);
    sum_cost = cost_a + cost_b + cost_c;
    if(sum_cost >= 100.0)
        {
            sum_cost = sum_cost*(1-discountrate);
            discount = sum_cost*discountrate;
        }
    else
        discount = 0.0;
// transportation fee
    float trans_fee;
    float total_weight;
    total_weight = *number_a + *number_b + *number_c;
    if(total_weight < 5.0 )
        trans_fee = 3.50;
    else if(total_weight < 20)
        trans_fee = 10.00;
    else
        trans_fee = 8.0 + 0.1*total_weight;
//***********
    printf("Artichokes will cost you %.2f, sugarbeets will cost %.2f, carrots will cost you%.2f.\n", cost_a, cost_b, cost_c );
    printf("That's %.2f in total.\n", cost_a+cost_b+cost_c);
    printf("You will get %.2f discount.\n", discount);
    printf("The transportation fee is %.2f.\n", trans_fee);
    printf("At the, you will pay %.2f for your order for goods.\n", sum_cost+trans_fee);
    printf("Compute done!\n");
}
