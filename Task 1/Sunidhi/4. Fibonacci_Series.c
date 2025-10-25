#include<stdio.h>
int main()
{
 int a=0,b=1,i=1,n,result;
 printf("enter no. of therms");
 scanf("%d",&n);
 printf("fibonacci series:");
    if (n >= 1) {
        printf("%d", a);
    }
    if (n >= 2) {
        printf(", %d", b);
    }
   for (i=3; i<=n; i++) {
   result = a+b;
   printf(", %d",result);
   a=b;
   b=result;
   }
  
   return 0;

}
//I can't -_-
   
