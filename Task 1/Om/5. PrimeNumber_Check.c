#include<stdio.h>
int main()
{
int a,n,c=0;
printf("enter a number to check whether it is prime or not\n");
scanf("%d",&a);
if(a<1)
{
printf("wrong input only positive number to be entered\n");

return 0;
}

for(n=2;n<a;n=n+1)
{
if(a%n==0)
{
c=c+1;
}
}
if(c==0)
{
printf("the number is a prime number");
}
else
{
printf("the number is not a prime number");
}


return 0;
}

