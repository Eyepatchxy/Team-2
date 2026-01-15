#include<stdio.h>
int main()
{
int x,y,z,i;
int lastdigit[10];
printf("enter a number" );
scanf("%d",&x);
y=x;

for ( z = 0; z < 10; z++) {
lastdigit[z]=0;
}

while(y>0)
{
i=y%10;
lastdigit[i]++;
y=y/10;
}

for ( z = 0; z < 10; z++) {


    printf("Digit %d = %d\n", z, lastdigit[z]);
}

return 0;

}