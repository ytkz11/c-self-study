#include <stdio.h>
/* https://www.icourse163.org/learn/ZJU-200001?tid=1464397446#/learn/content?type=detail&id=1242901280&cid=1266106670*/
/* 指针的使用*/
void divide(int *pa,int *pb);
int main(void)
{
	int a = 5;
	int b= 2;
	int c;
	if (divide(a,b,&c)){
		printf("%d/%d = %d\n",a,b,c);
	};
   return 0;
}
void divide(int a,int b, int *result){
	
	int ret = 1;
	if (b==0)ret = 0;
	else{
		*result  =  a/b;
	}
	return ret;
}