#include <stdio.h>
#define diff(x,y) (y-x)


int main(void){
	double x1,x2;

	printf("点1 ：");	scanf("%lf",&x1);

	printf("点2 ：");	scanf("%lf",&x2);

	printf("二者之差%f。\n", diff(x1,x2));

	return 0;}


