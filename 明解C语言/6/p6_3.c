#include <stdio.h>
#include <math.h>
/*cube*/

int cube(int a){
		return a*a*a;
}
int main(){
	int x;
	printf("请输入1个整数:\n");
	printf("整数:");
	scanf("%d",&x);
	printf("该整数的立方是%d ",cube(x));

	return 0;}

	
