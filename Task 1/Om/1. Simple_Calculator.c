#include<stdio.h>
int main()
{int c;
double a,b,e;
printf("enter two numbers to be used\n");
scanf("%lf", &a);
scanf("%lf",&b);
printf("to add type 1\n");
printf("to subtract type 2\n");
printf("to multiply type 3\n");
printf("to divide type 4\n");
scanf("%d",&c);
if(c==1)
{
e=a+b;
}
else if(c==2)
{
e=a-b;
}
else if(c==3)
{
e=a*b;
}
else if(c==4)
{ if(b!=0)
{
e=a/b;
}

else

printf("the answer is not defined");
}
else
{
printf(" WRONG INPUT\n");
}
printf("%lf",e);
return 0;
}