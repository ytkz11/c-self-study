#include <stdio.h>
/*
�����嵥10-12

ָ��ıȽ�
*/
int main(void){
	int cv[3] ={123,1,3};
	int *ptr = cv;
	
	printf("%d\n",*ptr);
		printf("%d\n",ptr);
		printf("%d\n",cv==ptr);
			printf("%d\n",&cv[1]<=&cv[1]);
	return 0;}
