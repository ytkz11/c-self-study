#include <stdio.h>
int main(){
	int a;
	int b;
	int c;

	printf("请输入两个整数。\n");
	printf("整数1：");
	scanf("%d",&a);
	printf("整数2：");
	scanf("%d",&b);
	if (a>b){
		c = b;
		printf("大于等于%d小于等于%d的所有整数的和是",b,a);
		do{
			
			b+=1;
			c = c+b;
		
	}while(a>b);
	printf("%d",c);
	}
	else
		{
		c = a;
		printf("大于等于%d小于等于%d的所有整数的和是",a,b);
		do{
			
			a+=1;
			c = c+a;
		
	}while(a<b);
	printf("%d",c);
	}
	return 0;
	
}