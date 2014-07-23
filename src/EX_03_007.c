
// SHOWF_PT.C --以两种方式显示浮点值

#include <stdio.h>
#include <math.h>

int main(void)
{
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;

	printf("%f can be written %e\n", aboat, aboat);
	printf("%f can be written %e\n", abet, abet);
	//printf("%f can be written %e\n", dip, dip);	//原文如此，C PRIMER PLUS 中文第五版 P49，但是输出错误。
	printf("%Lf can be written %Le\n", dip, dip);
	printf("%lf can be written %le\n", dip, dip);

	return 0;
}
