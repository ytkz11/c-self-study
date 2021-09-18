#include <stdio.h>
int main(){
	int a;

	printf("请输入月份：");

	scanf("%d",&a);

	switch (a){
	case 1 : printf("冬天");break;
	case 2 : printf("冬天");break;
	case 3 : printf("春天");break;
	case 4 : printf("春天");break;
	case 5 : printf("春天");break;
	case 6 : printf("夏天");break;
	case 7 : printf("夏天");break;
	case 8 : printf("夏天");break;
	case 9 : printf("秋天");break;
	case 10 : printf("秋天");break;
	case 11 : printf("秋天");break;
	case 12 : printf("冬天");break;
	default : puts("输入月份错误");break;
	}
	return 0;
	
}