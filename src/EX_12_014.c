// dyn_arr.c -- 为数组分配存储空间
#include <stdio.h>
#include <stdlib.h> // 我为malloc()和free()函数提供原型
int main(void)
{
	double * ptd;
	int max;
	int number;
	int i = 0;

	puts("What is the maximum number of type double entries?");
	scanf("%d", &max);
	ptd = (double *) malloc(max * sizeof(double));
	if(ptd == NULL)
	{
		puts("Memory allocation failed. Goodbye.");
		exit(EXIT_FAILURE);
	}
	// ptd 现在指向有max个元素的数组
	puts("Enter the values (q to quit)");
	while(i < max && scanf("%lf", &ptd[i]) == 1)
		++i;
	printf("Here are your %d entries:\n", number = i);
	for (i = 0; i < number; i++)
	{
		printf("%7.2f ", ptd[i]);
		if (i % 7 == 6)
			putchar('\n');
	}
	if(i % 7 != 0)
		putchar('\n');
	puts("Done");
	free(ptd);

	return 0;
}
