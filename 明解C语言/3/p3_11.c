#include <stdio.h>
int main(){
	int a;

	printf("请输入1个整数");

	scanf("%d",&a);

	switch (a%2){
	case 1 : printf("奇数");break;
	case 0 : printf("偶数");break;
	}
	return 0;
	
}