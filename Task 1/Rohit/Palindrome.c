#include<stdio.h>
int main()
{
 int a,result=0, remainder,q;
 printf("enter the number to check if it is palindrome or not:");
 scanf("%d",&a);
 q=a;
 while(q!=0)
 {
   remainder=q%10;
   result=result*10 +remainder;
   q=q/10;}
  if (result==a)
    printf("the number is a palindrome");                                                   
  else
    printf("the number ain't a palindrome");                                        //Well done
 return 0;
}
