#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    /* 函数要在主函数前面写 */

struct Student{
	char name[50];
	char major[50];
	int age;
	double gpa;
	
	
};
int main()
{
   struct Student student1;
   student1.age = 22;
   student1.gpa = 3.5;
   strcpy( student1.name, "Mark");
   strcpy( student1.major, "math");

    
   printf("%f\n", student1.gpa);
  printf("%s", student1.major);
   return 0;
}
