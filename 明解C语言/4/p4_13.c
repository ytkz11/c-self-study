#include <stdio.h>
int main(){
	int a,i,b;	
	printf("请输入1个正整数:");
		scanf("%d",&a);
	b = 1;
	for(i=1;i<=a;i++)
		printf("%d",i%10);
	return 0;}

	
