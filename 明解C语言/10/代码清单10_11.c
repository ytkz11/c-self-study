#include <stdio.h>
/*
�����嵥10-11

ȷ�ϲ����±����������������ֵ����ָ���һ��Ԫ�ص�ָ��
*/
void h(int *h)
{
	if(*h<180)
		*h = 180;
}
int main(void){
	int cv[3];
	printf("cv:%p\n",cv);
		printf("cv[0]�ĵ�ַ:%p\n",&cv[0]);
				printf("cv[1]�ĵ�ַ:%p\n",&cv[1]);
	return 0;}
