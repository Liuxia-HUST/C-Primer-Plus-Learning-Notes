// 习题7 -- 1英寸等于2.54cm，要求输入身高（以cm为单位），显示转换成inch

#include <stdio.h>
int main(void)
{
	float height_by_cm;
	float height_by_inch;

	printf("Your heigth:\t ?(in cms)\n");
	scanf("%f", &height_by_cm);

	height_by_inch = height_by_cm/2.54;
	printf("Your height are %.1f cms, and that's %.1f inchs", height_by_cm, height_by_inch);

	return 0;

}
