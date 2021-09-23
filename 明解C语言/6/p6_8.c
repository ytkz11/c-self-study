#include <stdio.h>
#include <math.h>
/**/

int rev_intary(int vb[],const int vc[], int no){
	
	
	for(int i=0;i<no;i++){
		vb[i]=vc[no-i-1];
	}
	return (vb[no]);	
}

int main(){
	int vc[5] = {1 ,2,3,666,886};

	printf("数组{ ");
	for (int i=0;i<5;i++){
		printf("%d", vc[i]);
		printf(" ");
	}
	printf("}中倒序排列是：\n");
	
	int v[5],vv[5];
	v[5] = rev_intary(vv,vc,5);
	for (int i=0;i<5;i++){
		
	printf("%d ",vv[i]);}

	return 0;}

	
