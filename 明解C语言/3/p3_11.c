#include <stdio.h>
int main(){
	int a;

	printf("������1������");

	scanf("%d",&a);

	switch (a%2){
	case 1 : printf("����");break;
	case 0 : printf("ż��");break;
	}
	return 0;
	
}