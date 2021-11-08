#include <stdio.h>
/*
´úÂëÇåµ¥10-4
*/
void h(int *h)
{
	if(*h<180)
		*h = 180;
}
int main(void){
	int a = 177;
	int b = 186;
	int c = 170;
	int d = 179;
	h(&d);
	printf("%d\n%d\n%d\n%d",a,b,c,d);
	return 0;}
