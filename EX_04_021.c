// 编程练习 4 -- 输入身高（inch）和名字，如下显示
// Dabney, you are 6.208 m tall;

#include <stdio.h>

int main(void)
{
	float height;
	char name[10];
	printf("Enter your name:\n");
	scanf("%s", name);
	printf("Enter your height in cms:\n");
	scanf("%f", &height);
	printf("%s, you are %.3f m tall.\n", name, height/100.0);


	return 0;
}


