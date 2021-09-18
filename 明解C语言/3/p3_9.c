#include <stdio.h>
/*计算出输入的三个整数中最小值并显示*/
int main(){
	int a,b,c;
	puts("请输入三个整数。");

	printf("整数1:");
	scanf("%d",&a);
	printf("整数2:");
	scanf("%d",&b);
	printf("整数3:");
	scanf("%d",&c);
	
	if (a==b &&b==c)
		printf("三个值都相等");
	else if (a==b ||b==c||a==c)
		printf("两个值都相等");
	else
		printf("三个值各不相等");

	return 0;
	
}