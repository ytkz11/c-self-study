#include <stdio.h>
int main(){
	int a,b;
	printf("请输入两个整数。\n");
	
	printf("整数A:");
	scanf("%d",&a);
	printf("整数B:");
	scanf("%d",&b);
	printf("它们的和是%d，积是%d。", a+b,a*b);

	return 0;
}