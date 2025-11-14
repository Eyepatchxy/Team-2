#include <stdio.h>
int main(){
    int r,n,sum=0;
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    n=num;
    while(num >0)
    {
      r = num % 10;
      sum= (sum*10) + r;
      num = num/10;
    }
    if(sum==n)
    { 
    printf("\n%d is a Palidrome",n);
    }
    else
   {
     printf("\n%d is not a Palindrome",n);
              
    
              }

}