#include <stdio.h>
/* https://www.icourse163.org/learn/ZJU-200001?tid=1464397446#/learn/content?type=detail&id=1242901280&cid=1266106670*/
/* 指针的使用*/
void swap(int *pa,int *pb);
int main(void)
{
	int a = 5;
	int b= 8;
	swap(&a, &b);
	printf("a = %d,b = %d",a,b);
   return 0;
}
void swap(int *pa,int *pb){
	
	int t = *pa;
	*pa  = *pb;
		*pb  = t;
}