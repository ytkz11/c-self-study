#include <stdio.h>
int main(){
	int a,b;


	printf("请输入1个正整数:");
	scanf("%d",&a);
	b=1;
	if (a>0){
		while(b<=a){
			printf("%d",b++);
			putchar('\n');
					}
	}
	else
		
	printf("请输入1个正整数");

	return 0;
	
}