#include <stdio.h>
#include <math.h>
/*2 4 8 16*/

int main(){
	int a;



	printf("������1��������:");

	scanf("%d",&a);

	int d = 2;
	int	c =2;
	while(d<a){
		printf("%d ",d);
		d = c*d;
	}

	return 0;}

	
