#include <stdio.h>
int main(){
	int a ,b;

	printf("整数A:");
	scanf("%d",&a);
	
	
	printf("整数B:");
	scanf("%d",&b);
	
	printf("A的值是%d\n",a);
	printf("B的值是%d\n",b);
	int c = a/b*100;
	printf("A的值是B的%d%%",a*100/b);

	return 0;
}