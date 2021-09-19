#include <stdio.h>
int main(){
	int a;

	printf("请输入一个非负数：");
	
	scanf("%d",&a);
	if (a>0){
		printf("%d的逆向显示的结果是",a);
		do{
			printf("%d",a%10);
			a = a/10;
	}while(a>0);
		
	
		
	}
	return 0;
	
}