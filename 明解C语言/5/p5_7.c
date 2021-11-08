#include <stdio.h>
int main(){
	int a[2][3] = {{1,2,3},{4,5,6}};
	int b[3][2] = {{1,5},{5,3},{8,1}};
	int c[2][2] = {0};
	for (int i =0;i<2;i++){
		for (int j =0;j<2;j++){
			for (int k =0;k<3;k++){
				c[i][j] += a[i][k]*b[k][j];
			}	
		}
	}
	printf("矩阵A与矩阵B的相乘结果是：\n");
	for (int i =0;i<2;i++){
		for (int j =0;j<2;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}


	return 0;
	
}