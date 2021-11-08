#include <stdio.h>
/*
练习10-2
*/

void swap(int *nx,int *ny){
	int temp = *nx;
	*nx = *ny;
	*ny = temp;
}
void sort(int *x1,int *x2,int *x3)
{
	if (*x1>*x2)
		swap(x1,x2);
	if (*x2>*x3)
		swap(x2,x3);
	if (*x1>*x2)
		swap(x1,x2);
}
int main(void){
	int a,b,c;
	puts("三个整数");
	printf("整数A:");	scanf("%d",&a);
	printf("整数B:");	scanf("%d",&b);
	printf("整数C:");	scanf("%d",&c);
	sort(&a,&b,&c);
	puts("按升序排列。");
	printf("%d\n",a);	
	printf("%d\n",b);	
	printf("%d\n",c);
	return 0;}
