#include <stdio.h>
int main(){
	int a;


	printf("������1��������");
	scanf("%d",&a);

	while(a>0){
		printf("%d",a--);
		putchar('\n');
	}
	return 0;
	
}