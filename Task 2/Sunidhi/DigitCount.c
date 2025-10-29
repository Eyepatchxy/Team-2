
#include<stdio.h>
int main()
{
 int num,sum;
 printf("enter a number:");
 scanf("%d",&num);
 while(num>=10);
 { 
  sum=0;
  while(num!=0);
  {
   sum+=num%10;
   num/=10;
   }
  num=sum;
}
printf("digital root=%d \n",num);
return 0;
}
 
