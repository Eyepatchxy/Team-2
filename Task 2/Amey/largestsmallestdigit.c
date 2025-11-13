#include <stdio.h>

int main()
{
    long long n;
    int digit, largest = 0, smallest = 9;

    printf("Enter a number: ");
    scanf("%lld", &n);

    long long temp = n;

    while (temp > 0)
    {
        digit = temp % 10;
        if (digit > largest)
            largest = digit;

        if (digit < smallest)
            smallest = digit;

        temp /= 10;
    }

    printf("\nIn the number %lld:\n", n);
    printf(" Largest digit = %d\n", largest);
    printf(" Smallest digit = %d\n", smallest);

    return 0;
}
