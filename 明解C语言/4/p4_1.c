#include <stdio.h>
int main(){
	int a;

	printf("������һ���Ǹ�����");
	
	scanf("%d",&a);
	if (a>0){
		printf("%d��������ʾ�Ľ����",a);
		do{
			printf("%d",a%10);
			a = a/10;
	}while(a>0);
		
	
		
	}
	return 0;
	
}