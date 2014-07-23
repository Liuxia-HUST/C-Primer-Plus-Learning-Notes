/* 习题6
编写一个程序，设置一个值为1.0/3.0的double类型变量和一个值为1.0/3.0的float类型变量。
每个变量的值显示三次；一次在小数点右侧显示4个数字，一次在小数点右侧显示12个数字，另一次
在小数点右侧显示16个数字。同时要让程序包括float.h文件，并显示FLT_DIG和DBL_DIG的值。
1.0/3.0的显示值与这些值一致么？
*/

#include <stdio.h>
#include <float.h>

int main(void)
{
	printf("FLT_DIG = %12.4e\t DBL_DIG = %12.4e\n", FLT_DIG, DBL_DIG);

	float aFloatVar = 1.0/3.0;
	double aDoubleVar = 1.0/3.0;
	printf("%.4f \t %.4e\n", aFloatVar, aDoubleVar);
	printf("%.12f \t %.12e\n", aFloatVar, aDoubleVar);
	printf("%.16f \t %.16e\n", aFloatVar, aDoubleVar);

	return 0;
}
