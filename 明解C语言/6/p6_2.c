#include <stdio.h>
#include <math.h>
/*min_3*/

int minof(int a ,int b,int c){
	int min = a;
	if (min>b) min = b;
		if (min>c) min = c;

		return min;
}
int main(){
	int x,y,z;
	printf("请输入3个整数:\n");
	printf("整数1:");
	scanf("%d",&x);
	printf("整数2:");
	scanf("%d",&y);
	printf("整数3:");
	scanf("%d",&z);
	printf("三者最小值是%d ",minof(x,y,z));

	return 0;}

	
