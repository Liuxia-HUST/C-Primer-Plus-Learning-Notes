// wordcnt.c -- 统计字符、单词和行
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'
int main(void)
{
	char c; //读入字符
	char prev;  // 前一个字符
	long n_chars = 0L;  //字符数
	int n_lines = 0;  // 行数
	int n_words = 0;  // 单词数
	int p_lines = 0;  // 不完整的行数
	bool inword = false; // 如果c在一个单词中，则inword等于true

	printf("Enter text to be analyzed(| to terminate):\n");
	prev = '\n';
	while ((c = getchar()) != STOP)
	{
		n_chars++; // 统计字符
		if (c == '\n')
			n_lines++;  // 统计行
		if (!isspace(c) && !inword)
		{
			inword = true; // 开始一个新单词
			n_words++; // 统计单词
		}
		if (isspace(c) && inword)
			inword = false; //到达单词的尾部
		prev = c;
	}

	if(prev != '\n')
		p_lines = 1;
	printf("characters = %ld, words = %d, lines = %d, ",n_chars, n_words, n_lines);
	printf("partial lines = %d\n", p_lines);

	return 0;
}
