#include <stdio.h>
#define max(x,y) (((x)>(y))?(x):(y))


int main(void){
	double a,b,c,d;

	printf("点1 ：");	scanf("%lf",&a);

	printf("点2 ：");	scanf("%lf",&b);

    printf("点3 ：");	scanf("%lf",&c);

	printf("点4 ：");	scanf("%lf",&d);


	printf("最大值是%f。\n", max(max(a,b),max(c,d)));

    printf("最大值是%f。\n", max(max(max(a,b),c),d));

	return 0;}


