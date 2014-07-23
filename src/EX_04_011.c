// intconv.c -- 一些不匹配的整数转换

#include <stdio.h>
#define PAGES 336
#define WORDS 65618

int main(void)
{
	short num = PAGES;
	short mnum = -PAGES;

	printf("num as short and unsigned short: %hd %hu %hu\n", num, num);
	printf("-num as short and unsigned short: %hd %hu %hu\n", mnum, mnum);// -336 =  65536 - 336 = 65200
	printf("num as int and char: %d %c\n", num, num);// 336对256取模，余80
	printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);

	return 0;
}
