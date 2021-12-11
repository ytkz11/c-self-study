#include <stdio.h>
/* https://www.icourse163.org/learn/ZJU-200001?tid=1464397446#/learn/content?type=detail&id=1242901280&cid=1266106670*/
/* 指针的使用*/
void minmax(int a[],int len, int *min ,int *max);
int main(void)
{
	int a[] = {1,2,3,4,5,6,7,8,9,100,1001,2,3,-1};
	int min,max;
	minmax(a, sizeof(a)/sizeof(a[0]),&min,&max);
	printf("min = %d,max = %d",min,max);
   return 0;
}
void minmax(int a[],int len, int *min ,int *max){
	
	int i;
	*min = *max = a[0];
	for (i=1;i<len;i++){
		if (a[i]<*min){
			*min = a[i];
			
		} if(a[i]>*max){
			*max = a[i];
		}
		
		
		
	}
}