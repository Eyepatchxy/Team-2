#include<stdio.h>
int main()
{
int a;
int b=0;
printf("enter a number\n");
scanf("%d",&a);
if(a==0)
{
b=1;
}

for(;a!=0;a=a/10)                                                                //Unique approch for negative numbers
{
b=b+1;
}
printf("The count of digits is\n\t\t\t");
printf("%d",b);

return 0;
}
