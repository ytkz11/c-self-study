#include <stdio.h>
/*����������4����������Сֵ����ʾ*/
int main(){
	int a,b;
	puts("������2��������");

	printf("����1:");
	scanf("%d",&a);
	printf("����2:");
	scanf("%d",&b);
	if (a>=b)
		printf("���ߵĲ���%d",a-b);
	else
		printf("���ߵĲ���%d",b-a);


	return 0;
	
}