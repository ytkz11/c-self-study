#include <stdio.h>
#include <stdlib.h>
    /* 函数要在主函数前面写 */
void sayhello(){
	printf("hello, everybody!\n");
}
void sayhi(char name[]){
	printf("hello, %s!", name);
}
int main()
{
   sayhello();
   sayhi("L");
   return 0;
}
