#include <stdio.h>
/*����������������������Сֵ����ʾ*/
int main(){
	int a,b,c;
	puts("����������������");

	printf("����1:");
	scanf("%d",&a);
	printf("����2:");
	scanf("%d",&b);
	printf("����3:");
	scanf("%d",&c);
	
	if (a==b &&b==c)
		printf("����ֵ�����");
	else if (a==b ||b==c||a==c)
		printf("����ֵ�����");
	else
		printf("����ֵ�������");

	return 0;
	
}