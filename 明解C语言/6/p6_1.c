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
	printf("������2������:\n");
	printf("����1:");
	scanf("%d",&x);
	printf("����2:");
	scanf("%d",&y);
	printf("������Сֵ��%d ",minof(x,y));

	return 0;}

	
