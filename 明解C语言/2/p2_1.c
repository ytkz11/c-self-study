#include <stdio.h>
int main(){
	int a ,b;

	printf("����A:");
	scanf("%d",&a);
	
	
	printf("����B:");
	scanf("%d",&b);
	
	printf("A��ֵ��%d\n",a);
	printf("B��ֵ��%d\n",b);
	int c = a/b*100;
	printf("A��ֵ��B��%d%%",a*100/b);

	return 0;
}