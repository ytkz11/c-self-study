#include <stdio.h>
/*
代码清单10-10
*/
void h(int *h)
{
	if(*h<180)
		*h = 180;
}
int main(void){
	int i;
	int vc[5] = {10,20,30,40,50};
	// *ptr 指向vc[0]， 所以*ptr  就是vc[0]的别名
	int *ptr = &vc[0];
	for(i=0;i<5;i++){
		printf("vc[%d]=%d  ptr[%d] = %d *(ptr+%d)=%d\n",
					i,vc[i],i,ptr[i],i,*(ptr+i));
	}
	return 0;}
