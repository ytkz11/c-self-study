#include <stdio.h>
/*
代码清单12-4

 对表示学生的结构体成员进行初始化
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
	

		printf("姓名=%s\n",sanaka.name);
				printf("身高=%d\n",sanaka.height);
						printf("体重=%f\n",sanaka.weight);
								printf("奖学金=%ld\n",sanaka.schols);

	return 0;}
