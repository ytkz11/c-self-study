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
	printf("������3������:\n");
	printf("����1:");
	scanf("%d",&x);
	printf("����2:");
	scanf("%d",&y);
	printf("����3:");
	scanf("%d",&z);
	printf("������Сֵ��%d ",minof(x,y,z));

	return 0;}

	
