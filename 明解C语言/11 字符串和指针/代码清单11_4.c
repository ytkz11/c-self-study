#include <stdio.h>
/*
�ַ�������
*/

int main(void){
	int i;
	char a[][8] = {"l","a","p"};
	char *p[] = {"Paul","xx","ee"};
	
	int k = sizeof(p);

	printf("%s",p[3]);

	//printf("%d\n",k);
	for (i=0;i<3;i++)
		printf("a[%d] = \"%s\"\n",i,a[i]);
	for (i=0;i<3;i++)
		printf("p[%d] = \"%s\"\n",i,p[i]);

	return 0;}

