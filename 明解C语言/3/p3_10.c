#include <stdio.h>
/*����������������������Сֵ����ʾ*/
int main(){
	int a,b;
	puts("������2��������");

	printf("����1:");
	scanf("%d",&a);
	printf("����2:");
	scanf("%d",&b);

	if (a>b&& a-b>10)		
		printf("���ǵĲ���ڵ���11.");
	else if (a<b&& b-a>10)
		printf("���ǵĲ���ڵ���11.");
	else if (a>b&& a-b<=10)
		printf("���ǵĲ�С�ڵ���10.");
	else if (a<b&& b-a<=10)		
		printf("���ǵĲ�С�ڵ���10.");
	else if (a=b)		
		printf("���ǵĲ�С�ڵ���10.");
		


	return 0;
	
}