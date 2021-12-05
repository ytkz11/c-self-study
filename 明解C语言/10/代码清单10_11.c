#include <stdio.h>
/*
代码清单10-11

确认不带下标运算符的数组名的值，是指向第一个元素的指针
*/
void h(int *h)
{
	if(*h<180)
		*h = 180;
}
int main(void){
	int cv[3];
	printf("cv:%p\n",cv);
		printf("cv[0]的地址:%p\n",&cv[0]);
				printf("cv[1]的地址:%p\n",&cv[1]);
	return 0;}
