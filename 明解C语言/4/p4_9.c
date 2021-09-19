#include <stdio.h>
/*2 4 6 8 10 12 14 16 18*/
int main(){
	int a,b;


	printf("请输入1个正整数:");
	scanf("%d",&a);
	b=1;
	if (a>0){
		while(b<=a){
			b+=1;
			if (b%2==0)		
				printf("%d ",b);
					}
	}
	else
		
	printf("请输入1个正整数");

	return 0;
	
}