#include <stdio.h>
/*
�����嵥10-10
*/
void h(int *h)
{
	if(*h<180)
		*h = 180;
}
int main(void){
	int i;
	int vc[5] = {10,20,30,40,50};
	// *ptr ָ��vc[0]�� ����*ptr  ����vc[0]�ı���
	int *ptr = &vc[0];
	for(i=0;i<5;i++){
		printf("vc[%d]=%d  ptr[%d] = %d *(ptr+%d)=%d\n",
					i,vc[i],i,ptr[i],i,*(ptr+i));
	}
	return 0;}
