#include <stdio.h>
int main(){
	int a,b,c;	
	printf("��ʼ��ֵ(cm):");
	scanf("%d",&a);
	printf("������ֵ(cm):");
	scanf("%d",&b);
	printf("�����ֵ(cm):");
	scanf("%d",&c);
	for(a;a<=b;a=a+c){
		
		printf("%dcm,  %.2fkg\n",a,(double) (a-100)*0.9);
		
	}
	return 0;}

	
