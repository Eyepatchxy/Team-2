#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter number you want to digit count: ");
    scanf("%d", &num);

    if (num < 0)
    {
        num = num * -1; // incase the input number is negative
    }

    if (num == 0)
    {
        count = 1; //single incase for zero
    }
    else
    {
        while (num > 0)
        {
            num = num / 10;
            count = count + 1;
        }
    }

    printf("Total digits = %d", count);

    return 0;
}