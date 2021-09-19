#include <stdio.h>
int main(){
	int a;


	printf("请输入1个整数。");
	scanf("%d",&a);

	while(a>0){
		printf("%d",a--);
		putchar('\n');
	}
	return 0;
	
}