/*
编程练习8
输入一个华氏温度。以double类型读入温度值，并将它作为一个参数传递给用户提供的函数Temperatures()。
该函数将计算对应的摄氏温度和绝对温度，并以小数点右边有两位数字的精度显示这三种温度。
它应该用每个值所代表的温度刻度来标识这三个值。
Celsius = 1.8 * Fahrenheit + 32.0
Kelvin = Celsius + 273.16
*/

#include <stdio.h>

void Temperatures(double Fahrenheit);

int main(void)
{
	double tmp;

	char str[20];

	printf("Enter a temperature in Fahrenheit:\n");
	gets(str);

	while (str[0] >= '0' && str[0] <= '9')
	{
		sscanf(str,"%lf", &tmp);
		Temperatures(tmp);
		printf("Enter a temperature in Fahrenheit:\n");
		gets(str);
	}

	return 0;
}

void Temperatures(double Fahrenheit)
{
	float Celsius, Kelvin;
	Celsius = 1.8 * Fahrenheit + 32.0;
	Kelvin = Celsius + 273.16;
	printf("%.2f  %.2f  %.2f", Fahrenheit, Celsius, Kelvin);

}
