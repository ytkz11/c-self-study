#include <stdio.h>
/*
�����嵥11-1

������ʵ�ֵ��ַ�������ָ��ʵ�ֵ��ַ�������ͬ��

putchar ֻ���õ�����''���������˫�����򱨴�
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
