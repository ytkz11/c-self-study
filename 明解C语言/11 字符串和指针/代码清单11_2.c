#include <stdio.h>
/*
代码清单11-1

用数组实现的字符串和用指针实现的字符串的相同点

putchar 只能用单引号''，如果用了双引号则报错
*/

int main(void){
	int i;
	
	char str[] ="ABC";
	char *ptr = "123";
	
	for (i=0;str[i];i++)
		putchar(str[i]);
	putchar('\n');
	
	for (i=0;ptr[i];i++)
		putchar(ptr[i]);
	putchar('\n');
	printf("str = \"%s\"\n",str);
		printf("str = \"%s\"\n",ptr);
	return 0;}
