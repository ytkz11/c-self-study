#include <stdio.h>
/*����������4����������Сֵ����ʾ*/
int main(){
	int a,b,c,d,max;
	puts("�������ĸ�������");

	printf("����1:");
	scanf("%d",&a);
	printf("����2:");
	scanf("%d",&b);
	printf("����3:");
	scanf("%d",&c);
	printf("����4:");
	scanf("%d",&d);
	max = a;
	if (max<b)
		max = b;
	if(max<c)
		max = c;
		if(max<d)
		max = d;
	printf("���ֵ��%d",max);

	return 0;
	
}