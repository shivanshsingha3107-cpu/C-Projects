#include<stdio.h>
int main(){
    printf("\n");
    printf("\n");
    printf("Calculator for operation on two numbers\n");
    printf("\n");
    printf("Select the operation, you want to perform\n");
    printf("Addition - 1\n");
    printf("subtraction - 2\n");
    printf("Multiplication - 3\n");
    printf("division - 4\n");
    int num;
    int a,b;
     int p,q;
      int r,s;
      float l,m;
      printf("\n");
      scanf("%d", &num);
      printf("\n");
      printf("\n");
    switch(num){

        case 1:
        
        printf("Enter both the numbers\n");
        scanf("%d" ,&a);
        printf("+\n");
        scanf("%d" ,&b);
        printf("Sum = %d\n" ,a+b);
        break;

        case 2:
        
        printf("Enter both the numbers\n");
        scanf("%d" ,&p);
        printf("-\n");
        scanf("%d" ,&q);
        printf("Difference = %d\n" ,p-q);
        break;

        case 3:
        
        printf("Enter both the numbers\n");
        scanf("%d" ,&r);
        printf("*\n");
        scanf("%d" ,&s);
        printf("multiplication = %d\n" ,r*s);
        break;

         case 4:
         
        printf("Enter both the numbers\n");
        scanf("%f" ,&l);
        printf("/\n");
        scanf("%f" ,&m);
        if(m!= 0){
        printf("Division = %f\n" ,l/m);
        }
        else{
            printf("Not Defined\n");
        }

        



        
    }

return 0;
}

    
    
