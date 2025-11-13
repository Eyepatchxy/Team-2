#include <stdio.h>

int main()
{
    long long n;
    int digit, evenSum = 0, oddSum = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    long long temp = n;

    while (temp > 0)
    {
        digit = temp % 10;

        if (digit % 2 == 0)
            evenSum += digit;
        else
            oddSum += digit;
        temp /= 10;
    }

    printf("\nIn the number %lld:\n", n);
    printf(" Sum of even digits = %d\n", evenSum);
    printf(" Sum of odd digits  = %d\n", oddSum);

    return 0;
}
