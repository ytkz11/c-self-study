#include <stdio.h>
#define max(x,y) (((x)>(y))?(x):(y))


int main(void){
	double a,b,c,d;

	printf("��1 ��");	scanf("%lf",&a);

	printf("��2 ��");	scanf("%lf",&b);

    printf("��3 ��");	scanf("%lf",&c);

	printf("��4 ��");	scanf("%lf",&d);


	printf("���ֵ��%f��\n", max(max(a,b),max(c,d)));

    printf("���ֵ��%f��\n", max(max(max(a,b),c),d));

	return 0;}


