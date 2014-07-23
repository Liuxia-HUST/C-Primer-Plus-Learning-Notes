// 习题5 -- 一年约有3.156x1.0e7s，输入年龄，显示该年龄合多少秒

#include <stdio.h>

int main(void)
{
	float Age;
	float Age_seconds;

	scanf("%f", &Age);
	Age_seconds = Age * 3.156*1.0e7;
	printf("%f years equal %f seconds", Age, Age_seconds);

	return 0;
}

