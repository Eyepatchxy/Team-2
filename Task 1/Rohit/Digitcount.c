#include <stdio.h>
int main ()
{

int a, count = 0;

    printf("Enter digit you want for digit count:");
    scanf("%d", &a);

    if (a < 0)
    {
        a = a * -1; 
    }

    if (a == 0)
    {
        count = 1; 
    }
    else
    {
        while (a > 0)
        {
            a= a / 10;
            count = count + 1;
        }
    }

    printf("Total digits = %d", count);

    return 0;
}