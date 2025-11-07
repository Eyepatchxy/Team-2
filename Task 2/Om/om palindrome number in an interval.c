#include<stdio.h>
int main()
{ 
int a,b,c,d,x=0;
int f,i;
printf("enter a number to begin from\n");
scanf("%d",&a);
printf("enter a number to end with\n");
scanf("%d",&f);
for(i=a;i<=f;i++)
{
b=i;
while(b!=0)
{
  c=b%10;
  x=x*10 +c;
  b=b/10;
  }
  
  if(x==i)
  {
  printf("the number is a palindrome      %d\n",x);
  }
  
  x=0;
  }
  
  return 0;
  }