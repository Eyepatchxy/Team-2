#include<stdio.h>
int main()
{
    int a,b,e=0,o=0;
    printf("enter a number");
    scanf("%d",&a);
    
    while(a>0)
    {
    b=a%10;
    if(b % 2 ==0)
    {
        e=e+b;
        
    }
    else
    {
    o=o+b;
    
    }
    a=a/10;
    }
    printf("the sum of even numbers is    %d\n",e);
    printf("the sum of odd numbers is     %d",o);

    return 0;

}