#include <stdio.h>
int main(){
	int a;

	printf("������һ������:");
	scanf("%d",&a);

	if (a<0)
		printf("����ֵ��%d",-1*a);
	else
		printf("����ֵ��%d",a);

	return 0;
	
}