#include <stdio.h>
int main(){
	int i,j;	
	for (i=1;i<=9;i++){
		for (j=1;j<=9;i++)
		
	}
	printf("开始数值(cm):");
	scanf("%d",&a);
	printf("结束数值(cm):");
	scanf("%d",&b);
	printf("间隔数值(cm):");
	scanf("%d",&c);
	for(a;a<=b;a=a+c){
		
		printf("%dcm,  %.2fkg\n",a,(double) (a-100)*0.9);
		
	}
	return 0;}

	
