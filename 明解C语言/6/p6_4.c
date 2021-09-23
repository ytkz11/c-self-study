#include <stdio.h>
#include <math.h>
/*cube*/

int sqr(int x){
	return (x*x);
}
int pow4(int a){
		return (sqr(a)*sqr(a));
}
int main(){
	int x;
	printf("请输入1个整数:\n");
	printf("整数:");
	scanf("%d",&x);
	printf("该整数的4次方是%d ",pow4(x));

	return 0;}

	
