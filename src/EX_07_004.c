// electric.c -- 计算用电账目
#include <stdio.h>
#define RATE1 0.12589  // 第一个360kWh的费率
#define RATE2 0.17901  // 下一个360kWh的费率
#define RATE3 0.20971  // 超过680kWh的费率
#define BREAK1 360.0   // 费率的第一个分界点
#define BREAK2 680.0   // 费率的第二个分界点
#define BASE1 (RATE1 * BREAK1)  // 用电360.0kWh的费用
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1))) //用电680.0kWh的费用

int main(void)
{
	double kwh;
	double bill;

	printf("Please enter the kwh used.\n");
	scanf("%lf", &kwh);
	if (kwh <= BREAK1)
		bill = RATE1 * kwh;
	else if (kwh <= BREAK2)    // 360kwh~680kwh
		bill = BASE1 + (RATE2 * (kwh - BREAK1));
	else    // >680kwh
		bill = BASE2 + (RATE3 * (kwh - BREAK2));

	printf("The charge for %.1f kwh is $%1.2f.\n", kwh, bill);

	return 0;
}
