/*
编程联系4
用户输入厘米高度值，程序按厘米和英寸显示。
*/
#include <stdio.h>
int main(void)
{
	float cm;
	int feet;
	float inch;

	printf("Enter a height in centimeters:\t");
	scanf("%f", &cm);
	while(cm>0)
	{
		inch = cm / 2.54;
		feet = (int) inch/12;
		inch = inch - feet * 12;
		printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, inch);
		printf("Enter a height in centimeters(<= 0 to quit):\t");
		scanf("%f", &cm);
	}
	printf("bye\n");

	return 0;

}
