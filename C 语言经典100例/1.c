#include <stdio.h>
 /*��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�*/
int main()
{
	int i,j,k;
	int a =0;
	
	printf("\n");
	for(i=1;i<5;i++){
		for(j=1;j<5;j++){
			for(k=1;k<5;k++){
				if(i!=k&&i!=j&&j!=k){
					printf("%d%d%d\n",i,j,k);
					a+=1;
				}
			}
	}}
	printf("��1��2��3��4�����֣������%d��������ͬ�����ظ����ֵ���λ��",a);
   return 0;
}