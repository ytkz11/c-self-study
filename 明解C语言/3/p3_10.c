#include <stdio.h>
/*计算出输入的三个整数中最小值并显示*/
int main(){
	int a,b;
	puts("请输入2个整数。");

	printf("整数1:");
	scanf("%d",&a);
	printf("整数2:");
	scanf("%d",&b);

	if (a>b&& a-b>10)		
		printf("它们的差大于等于11.");
	else if (a<b&& b-a>10)
		printf("它们的差大于等于11.");
	else if (a>b&& a-b<=10)
		printf("它们的差小于等于10.");
	else if (a<b&& b-a<=10)		
		printf("它们的差小于等于10.");
	else if (a=b)		
		printf("它们的差小于等于10.");
		


	return 0;
	
}