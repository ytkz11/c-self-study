#include <stdio.h>
#include <math.h>
/*cube*/

int sqr(int x){
	return (x*x);
}
int pow4(int a){
		return (sqr(a)*sqr(a));
}
int main(){
	int x;
	printf("������1������:\n");
	printf("����:");
	scanf("%d",&x);
	printf("��������4�η���%d ",pow4(x));

	return 0;}

	
