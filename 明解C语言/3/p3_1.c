#include <stdio.h>
int main(){
	int a,b;
	double c;
	printf("����A:");
	scanf("%d",&a);
	printf("����B:");
	scanf("%d",&b);
	while(b==0){
			printf("����B������0������������:");
	scanf("%d",&b);
	}

	if (a%b)
		printf("b����a��Լ����");
	else
				printf("b��a��Լ����");
	c = a%b;
	printf("\n����������������%f",(double) c);
	return 0;
	
}