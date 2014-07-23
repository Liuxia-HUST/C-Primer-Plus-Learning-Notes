/*
编程练习4
用户输入大写字母D，嵌套循环产生金字塔
    A
   ABA
  ABCBA
 ABCDCBA
*/
#include <stdio.h>
int main(void)
{
	int row;
	char ch, ch_1;
	int i,j,m,k;

	printf("Enter a char:\n");
	scanf("%c", &ch_1);

	row = ch_1 - 'A';
	for(i = 0; i<row+1; i++)
	{
		ch = ch_1;
		for(j = 0; j< (row-i); j++)
			printf(" ");
		for(k = 0; k<i+1; k++)
			printf("%c", ch - row+k );
		for(m = 0; m<i; m++)
			printf("%c", ch - row+i-1-m);
		printf("\n");
	}

	return 0;
}
