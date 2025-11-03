#include<stdio.h>
int main()
{
int a,b,s=0;
printf("enter a number");
scanf("%d",&a);

while (a!=0)
{
b=a%10;
a=a/10;
s=s+b;
}

printf("the sum of digits is %d",s);

return 0;
}