#include<stdio.h>
int main()
{
int a=0,b=1,n,x;
int i;
printf("enter number of terms to be provided");
scanf("%d",&n);
if(n<=0)
{
printf("wrong input please enter a positive number");

return 0;
}
if(n>=1)
{
printf("%d\n",a);
}
if(n>=2)
{
printf("%d\n",b);
}
i=3;
while(i<=n)
{
x=a+b;

printf("%d\n",x);
a=b;
b=x;
i=i+1;
}

return 0;
}