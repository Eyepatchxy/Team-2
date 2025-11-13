#include <stdio.h>

int main()
{
    long long n, temp;
    int count, digit;

    printf("Enter a number: ");
    scanf("%lld", &n);

    printf("\nDigit Frequency:\n");

    for (int i = 0; i <= 9; i++)
    {
        temp = n;
        count = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            if (digit == i)
                count++;
            temp /= 10;
        }

        if (count > 0)
            printf("%d --> %d time%s\n", i, count, (count > 1) ? "s" : "");
    }

    return 0;
}
