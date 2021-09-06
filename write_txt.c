#include <stdio.h>
 
int main()
{
   FILE * fpointer = fopen("1.txt","w");
   
   fprintf(fpointer,"Jim, Saleman");
   fclose(fpointer);
   
   return 0;
}