#include <stdio.h>
/*计算出输入的4个整数中最小值并显示*/
int main(){
	int a,b,c,d,max;
	puts("请输入四个整数。");

	printf("整数1:");
	scanf("%d",&a);
	printf("整数2:");
	scanf("%d",&b);
	printf("整数3:");
	scanf("%d",&c);
	printf("整数4:");
	scanf("%d",&d);
	max = a;
	if (max<b)
		max = b;
	if(max<c)
		max = c;
		if(max<d)
		max = d;
	printf("最大值是%d",max);

	return 0;
	
}