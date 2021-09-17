#include <stdio.h>
int main(){
	int a,b;
	double c;
	printf("整数A:");
	scanf("%d",&a);
	printf("整数B:");
	scanf("%d",&b);
	while(b==0){
			printf("整数B不等于0，请重新输入:");
	scanf("%d",&b);
	}

	if (a%b)
		printf("b不是a的约数。");
	else
				printf("b是a的约数。");
	c = a%b;
	printf("\n这两个数的余数是%f",(double) c);
	return 0;
	
}