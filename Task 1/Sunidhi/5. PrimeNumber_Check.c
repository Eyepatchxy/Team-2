#include<stdio.h>
int main()
{ 
 int n,i, count=0;
 printf("enter the number:");
 scanf("%d",&n);
 for(i=1; i<=n; i++)
 {
   if(n%i==0)
  { 
    count++;
  }
 }
if(count==2)
printf("given number is a prime number");
else 
printf("given number ain't a prime number");
return 0;
}
