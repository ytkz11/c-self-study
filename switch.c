#include <stdio.h>
 
/* scanf读取字符， %c前面要加一个空格*/
int main()
{

	char grade;
	printf("Enter Grade:");
	scanf( "%c",&grade);
	
	
	switch(grade){
	case 'A':
			printf("Great!");
			break;
	case 'B':
			printf("Alright!");
			break;
	case 'C':
			printf("Poorly");
			break;
	case 'D':
			printf("Bad!");
			break;
	case 'F':
			printf("Failed!");
			break;
	default :
			printf("Invild Grade!");
	}
   return 0;
}