#include <stdio.h>
/*计算出输入的4个整数中最小值并显示*/
int main(){
	int a,b;
	puts("请输入2个整数。");

	printf("整数1:");
	scanf("%d",&a);
	printf("整数2:");
	scanf("%d",&b);
	if (a>=b)
		printf("二者的差是%d",a-b);
	else
		printf("二者的差是%d",b-a);


	return 0;
	
}