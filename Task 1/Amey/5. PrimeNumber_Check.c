#include <stdio.h>

int main()
{
    int number, i;
    int isPrime = 1;

    printf("Enter the number you want to check:\n");
    scanf("%d", &number);

    if (number <= 1)
    {
        printf("Not a prime number.\n");
        return 0;
    }

    for (i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
    {
        printf("Your number is prime.\n");
    }
    else
    {
        printf("The number is not prime.\n");
    }

    return 0;
}
