#include <stdio.h>
int main(){
	int a;
int b = 0;
	printf("������һ���Ǹ�����");
	
	scanf("%d",&a);
	if (a>0){
		printf("%d��λ����",a);
		do{
			b+=1;
		
			a = a/10;
	}while(a>0);
		
	printf("%d",b);
		
	}
	return 0;
	
}