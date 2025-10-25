#inlude<stdio.h>
int main()
{
  float x,y,result;
  char operator;
  printf("operator which you want to use (+, -, *, /):");
  scanf("%c",&operator);
  printf("enter the 2 numbers a and b by your choice:");                                                          //Use \n for new line
  scanf("%f %f,&a, &b");                                                                                          //Check Double Quotes Placement
  switch (operation)
  {
   case '+':
    result=a+b;                                                                                                   //result variable declaration?
    printf("the sum is:%1f\n", result);
    break;
   case'-':
    result=a-b;
    printf("the difference between them is:  %1f\n", result);
    break;
   case'*':
     result=a*b;
     printf("multiplication gives:%1f\n",result);
     break;
   case '/':
     if(b!=0)                                                                                                      //Good
      result= a/b;
     else{
      printf(duh..division by zero? nopee.\n");
      return0;
      }
     printf("quotient:%1f\n", result);
     break;
   default:
     printf('that operator ain't valid.\n");
  }
  printf("thankyou<3\n");
  return0;
}
