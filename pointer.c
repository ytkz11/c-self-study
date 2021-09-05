#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    /* 函数要在主函数前面写 */


int main()
{
   int age = 30;
   int * pAge = &age;
   double gpa = 3.4;
   double * pGpa = &gpa;
   char grade = 'a';
   char * aGrade = &grade;
   
   
	printf("%d",  *pAge);

    

   return 0;
}
