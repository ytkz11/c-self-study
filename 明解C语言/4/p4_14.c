#include <stdio.h>
int main(){
	int a,b,c;	
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

	
