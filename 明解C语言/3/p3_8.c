#include <stdio.h>
/*����������������������Сֵ����ʾ*/
int main(){
	int a,b,c,min;
	puts("����������������");

	printf("����1:");
	scanf("%d",&a);
	printf("����2:");
	scanf("%d",&b);
	printf("����3:");
	scanf("%d",&c);

	min = (a<b)?a:b;
	min = (min<c)?min:c;

	printf("��Сֵ��%d",min);

	return 0;
	
}