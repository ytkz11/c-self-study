#include <stdio.h>
/*计算标准体重，结果保留一位小数*/
int main(){
	int a;
	printf("请输入您的身高：\n");
	scanf("%d",&a);
	printf("您的标准体重是：%.1f公斤",(double)(a-100)*0.9);
	return 0;
}