#include <stdio.h>
int main(){
	int a;
	int b;
	int c;

	printf("����������������\n");
	printf("����1��");
	scanf("%d",&a);
	printf("����2��");
	scanf("%d",&b);
	if (a>b){
		c = b;
		printf("���ڵ���%dС�ڵ���%d�����������ĺ���",b,a);
		do{
			
			b+=1;
			c = c+b;
		
	}while(a>b);
	printf("%d",c);
	}
	else
		{
		c = a;
		printf("���ڵ���%dС�ڵ���%d�����������ĺ���",a,b);
		do{
			
			a+=1;
			c = c+a;
		
	}while(a<b);
	printf("%d",c);
	}
	return 0;
	
}