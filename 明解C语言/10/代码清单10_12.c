#include <stdio.h>
/*
代码清单10-12

指针的比较
*/
int main(void){
	int cv[3] ={123,1,3};
	int *ptr = cv;
	
	printf("%d\n",*ptr);
		printf("%d\n",ptr);
		printf("%d\n",cv==ptr);
			printf("%d\n",&cv[1]<=&cv[1]);
	return 0;}
