// 习题6 -- 一个水分子质量约为3.0e-23g, 1夸脱水约有950g。输入水的夸脱数，显示其中包含水分子数。

#include <stdio.h>

int main(void)
{
	double quart;
	double massPerquart;
	double NumOfMolecule;

	massPerquart = 3.0e-23;

	printf("How many quart water do you have?\n");
	scanf("%lf", &quart);
	printf("We have %f quart of water.\n", quart);
	NumOfMolecule = quart/massPerquart;
	printf("There are %e water Molecules\n", NumOfMolecule);

	return 0;
}
