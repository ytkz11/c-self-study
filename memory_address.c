#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    /* 函数要在主函数前面写 */


int main()
{
   int age = 30;
   double gpa = 3.4;
   char grade = 'a';
   
   
	printf("age:%p\ngpa:%p\ngrade:%p", &age, &gpa, &grade);

    

   return 0;
}
