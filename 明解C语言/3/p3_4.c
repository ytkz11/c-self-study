#include <stdio.h>
int main(){
	int a,b;

	printf("请输入两个整数\n");
	printf("整数A:");
	scanf("%d",&a);
	printf("整数B:");
	scanf("%d",&b);

	if (a<b)
		printf("A小于B");
	else if(a>b)
		printf("A大于B");
	else
		printf("A等于B");

	return 0;
	
}