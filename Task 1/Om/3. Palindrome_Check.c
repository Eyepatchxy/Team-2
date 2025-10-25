#include<stdio.h>
int main()
{ 
int a,b,c,d,x=0;
printf("enter a number\n");
scanf("%d",&a);
b=a;
while(b!=0)
{
  c=b%10;
  x=x*10 +c;
  b=b/10;
  }
  if(x==a)
  {
  printf("the number is a palindrome\n");
  }
  else
  {
  printf("the number is not a palindrome\n");
  }
  
  return 0;
  }
  