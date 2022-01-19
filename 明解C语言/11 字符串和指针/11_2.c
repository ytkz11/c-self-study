#include <stdio.h>
/*
×Ö·û´®Êý×é
*/



int main(void){
	int i;
	char a[][8] = {"l","a","p"};
	char *p[] = {"Paul","xx","ee"};
	

	for (i=0;i< sizeof(a)/sizeof(a[0]);i++)
		printf("a[%d] = \"%s\"\n",i,a[i]);
	for (i=0;i< sizeof(p)/sizeof(p[0]);i++)
		printf("p[%d] = \"%s\"\n",i,p[i]);
	return 0;
}
