#include <stdio.h>
int main(){
	int a;
int b = 0;
	printf("请输入一个非负数：");
	
	scanf("%d",&a);
	if (a>0){
		printf("%d的位数是",a);
		do{
			b+=1;
		
			a = a/10;
	}while(a>0);
		
	printf("%d",b);
		
	}
	return 0;
	
}