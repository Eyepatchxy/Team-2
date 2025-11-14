#include <stdio.h>

int main() {
    int a, i, isPrime = 1; 

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a <= 1) {
        isPrime = 0; 
    } else {
        
        for (i = 2; i <= a / 2; i++) {
            if (a % i == 0) {                                                                        //Good Logic Building
                isPrime = 0; 
                break;
            }
        }
    }
    if (isPrime)
        printf("%d is a Prime Number.\n", a);
    else
        printf("%d is NOT a Prime Number.\n", a);

    return 0;
}