#include <stdio.h>
#include <math.h>
/*代码清单7-11*/
double dist(double x1, double y1, double x2, double y2){
	return (sqrt(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}


int main(void){
	double x1,x2,y1,y2;

	printf("点1 的X坐标：");	scanf("%lf",&x1);
	printf("      Y坐标：");	scanf("%lf",&y1);
	printf("点2 的X坐标：");	scanf("%lf",&x2);
	printf("      Y坐标：");	scanf("%lf",&y2);
	
	printf("2点之间的距离为%f。\n", dist(x1,y1,x2,y2));     

	return 0;}

	
