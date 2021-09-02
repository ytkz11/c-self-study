#include <stdio.h>
 
int main()
{
   /* 我的第一个 C 程序 */
   int numbers[]={4,5,6,7,8};
   printf("first number is %d \n",numbers[0]);
   
   numbers[0] = 2000;
    printf("modified first number is %d \n",numbers[0]);
   
   return 0;
}