#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    /* 函数要在主函数前面写 */


int main()
{
   int index = 1;
   int guess;
   int guessCount = 0;
   int guessLimit = 3;
   int outofGuesses = 0;
   
   while(guess != index && outofGuesses ==0){
	   if(guessCount < guessLimit){
		   printf("Enter a number:");
		   scanf("%d", &guess);
	       guessCount++;
		} else {
		   outofGuesses = 1;
		    
	    }
   }
   
   if(outofGuesses == 1){
	    printf("Out of guesses"); 
   }else {
	    printf("You Win"); 
   }
  
   return 0;
}
