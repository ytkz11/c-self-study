#include <stdio.h>
#include <math.h>
/*min*/

int minof(int a ,int b){
	if (a<b){
		return a;
	}else 
		return b;
}
int main(){
	int x,y;
	printf("请输入2个整数:\n");
	printf("整数1:");
	scanf("%d",&x);
	printf("整数2:");
	scanf("%d",&y);
	printf("二者最小值是%d ",minof(x,y));

	return 0;}

	
