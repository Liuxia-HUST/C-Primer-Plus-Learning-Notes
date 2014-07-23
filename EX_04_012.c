// floatconv.c -- 不匹配的浮点数转换
#include <stdio.h>
int main(void)
{
	float n1 = 3.0;
	double n2 = 2.0;
	long n3 = 2000000000;
	long n4 = 1234567890;

	printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
	printf("%ld %ld\n", n3, n4);
	printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);// 先读取了n1的前4个字节作为%ld 输出，再读n1的后4个字节，n3 和n4没有输出

	return 0;
}
