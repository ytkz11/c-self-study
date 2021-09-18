#include <stdio.h>
int main(){
	int a,b ;
	printf("请输入2个整数\n");
	printf("整数a：");
	scanf("%d",&a);
	printf("整数b：");
	scanf("%d",&b);
	
	printf("a是b的%f%%",(double)a/b*100);
	return 0;
}