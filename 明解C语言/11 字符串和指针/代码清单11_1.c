#include <stdio.h>
/*
代码清单11-1

用数组实现的字符串和用指针实现的字符串
*/

int main(void){
	char str[] ="ABC";
	char *ptr = "123";
	
	printf("str = \"%s\"\n",str);
		printf("str = \"%s\"\n",ptr);
	return 0;}
