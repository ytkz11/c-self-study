#include <stdio.h>
int main(){
	int i,b;
	int a[5];
	
	b=5;
	for(i=0;i<5;i++){
			a[i] = b-i;}
	for(i=0;i<5;i++)	
		printf("a[%d] = %d\n",i,a[i]);
	return 0;
	
}