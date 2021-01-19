#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number,guess,c,p,h,name,nguesses=1;
    char np;
    srand(time(0));
    number=rand()%100+1; // generates random number between 1 - 100
     printf("Number is %d ", number);
      // keep running the loop until the number is guessed.
      printf("\n\n\t\t\t\t\t***WELCOME TO NUMBER GUESSING GAME***\n");
      
          printf("TYPE:\n 1 to PLAY.\n 2 to EXIT.\n\n");
          scanf("%d",&c);
          if(c==1)
          
        do{
            
                    
            printf("\nGUESS the number between 1-100.\n");
              scanf("%d" , &guess);
              
              if(guess>number)
              {
                  printf("Lower number please!\n");
              }
              else if(guess<number) 
              {printf("Higher number please!\n");}
              else 
              {
                 printf("You guessed it in %d attempt.\n",nguesses);
                 printf("\n\t\t\tCONGO!! YOU WON (^_^)..");
                 printf("\n\t\t\tTHANK YOU for playing this game.\n\t\t\tHOPE YOU ENJOYED.. ");
              }
             nguesses++; 
        }
      while(guess!=number);
      
          else if(c==2)
      {printf("THANK YOU");}
      else {printf("INVALID !");
      return 0;}
}