#include <stdio.h>
/*计算出输入的三个整数中最小值并显示*/
int main(){
	int a,b,c,min;
	puts("请输入三个整数。");

	printf("整数1:");
	scanf("%d",&a);
	printf("整数2:");
	scanf("%d",&b);
	printf("整数3:");
	scanf("%d",&c);
	min = a;
	if (min>b)
		min = b;
	if(min>c)
		min = c;
	printf("最小值是%d",min);

	return 0;
	
}