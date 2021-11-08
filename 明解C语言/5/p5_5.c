#include <stdio.h>
int main(){
	int i;
	int a[8];
	


	for(i=0;i<8;i++){	
		printf("a[%d]:",i);
	scanf("%d",&a[i]);}
	
	for (i =0;i<4;i++){
		int temp =a[i];
		a[i] = a[7-i];
		a[8-i] = temp;
	}
	
	for (i = 0;i<8;i++){
		printf("a[%d] = %d\n",i,a[i]);
	}
	return 0;
	
}