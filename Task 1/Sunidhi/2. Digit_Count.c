#include<stdio.h>
int main()
{
 int num,count;
 printf("Tell the number: ");
 scanf("%d",&num);
 if (num==0)
  {
   count=1;
  }
 else {
  if (num<0) num= -num;
  while (num !=0)
  {
    num / =10;
    count=++;                                                                       // count is never initialized
   }
 }
 printf("total digits in your number are:%d \n, count);
 return 0;
}                                                                                  //Well Done
