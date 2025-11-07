#include<stdio.h>
int main()
{
int a,b,s;
printf("enter a number");
scanf("%d",&a);

while (a>9)
{
s=0;
while(a!=0)
{
b=a%10;
a=a/10;
s=s+b;
}
a=s;
}

printf("the sum of digits is %d\n",a);
return 0;
}