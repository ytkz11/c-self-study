#include <stdio.h>
/*
�����嵥12-4

 �Ա�ʾѧ���Ľṹ���Ա���г�ʼ��
*/
# define NUMBER 5 
struct gstudent{
	char name[20];
	int height;
	float weight;
	long schols;
};

int main(void){
	struct gstudent sanaka = {"Sanaka",175,70.5};
	

		printf("����=%s\n",sanaka.name);
				printf("���=%d\n",sanaka.height);
						printf("����=%f\n",sanaka.weight);
								printf("��ѧ��=%ld\n",sanaka.schols);

	return 0;}
