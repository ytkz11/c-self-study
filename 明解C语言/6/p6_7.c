#include <stdio.h>
#include <math.h>
/*cube*/

int minof(const int vc[], int no){
	int min = vc[0];
	for(int i=1;i<no;i++){
		if(vc[i]<min){
			min = vc[i];
		}
	}
	return min;
	
}

int main(){
	int vc[5] = {1,2,3,66,886};

	printf("����{ ");
	for (int i=0;i<5;i++){
		printf("%d", vc[i]);
		printf(" ");
	}
	printf("}����Сֵ�ǣ�\n");
	
	printf("%d",minof(vc,5));

	return 0;}

	
