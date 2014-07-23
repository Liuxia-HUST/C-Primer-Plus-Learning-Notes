// talkback.c -- 一个能为你提供一些信息的对话程序

#include <stdio.h>
#include <string.h>  //提供strlen()函数的原型
#define DENSITY 62.4 //人的密度（英镑/每立方英尺）

int main(void)
{
	float weight, volume;
	int size, letters;
	char name[40];

	printf("Hi! What's your name?\n");
	//scanf("%s", name); //sacnf读取%s字符串时，遇到空格终止
	gets(name); //读取一行
	printf("%s, waht's your weight in pounds?\n", name);
	scanf("%f", &weight);
	size = sizeof(name);

	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %2.2f cubic feet.\n", name ,volume);
	printf("Also, your first name has %d letters, \n", letters);
	printf("and we have %d bytes to store it in.\n", size);

	return 0;
}
