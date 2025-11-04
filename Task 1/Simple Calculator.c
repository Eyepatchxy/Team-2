#include <stdio.h>
int main()
{ int num1, num2, choice;
    printf("Enter two numbers:");
    scanf(" %d %d", &num1, &num2);
    printf("1. Addition\n2 ,Substraction\n3,Multiplication\n4, Division\n");
    printf("Enter your Choice:");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
             printf("Sum : %d",num1+num2);
             break;
        case 2:
             printf("Difference: %d", num1-num2);
             break;
        case 3:
             printf("Multiplication: %d", num1*num2);   
             break;
        case 4:     
             if(num2!=0)
                 printf("Quotient: %d", num1/num2);
             else
                 printf("Error! Division by zero is not allowed");  
             break;
        default:
              printf("Error! invalid Choice");   
    }      
             return 0;
 }         