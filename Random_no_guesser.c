#include<stdio.h>
#include <stdlib.h>   // rand(), srand()
#include <time.h>     // time()
     int main(){
     
    srand(time(0));   // Seed the random number generator

    int random = (rand() % 300) + 1;

    // printf("Random number: %d\n", random); // Uncomment for testing



    printf("Guess the no :-\n");
    printf("HINT\n");


    if(random >= 1 && random <= 100){

        printf("The no is between 1 and 100\n");
    }

    else if(random >= 101 && random <= 200)
    {
        printf("The no is between 101 and 200\n");
    }

    else{
        printf("The no is between 201 and 300\n");
    }

    int number = 0;
    printf("Enter the number\n");
    
int i = 0;
    while(random != number){

        scanf("%d" , &number);

        if(random > number){
            printf("Please Enter a greater no.\n");
        }

            else if(random < number){
            printf("Please Enter a smaller no.\n");

            
        }
        
        i++;
        }

        
    
                printf("You guessed it right!!\n");
                printf("You took %d attempts\n", i);
            

   


     return 0;
}