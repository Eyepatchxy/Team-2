#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; 

    while (num != 0) {
        remainder = num % 10;                
        reversedNum = reversedNum * 10 + remainder; 
        num = num / 10;                      
    }

    if (originalNum == reversedNum)
        printf("%d is a Palindrome Number (reads same forward and backward).\n", originalNum);
    else
        printf("%d is NOT a Palindrome Number.\n", originalNum);

    return 0;                                                                                                        //Well Done
}

Output:
Enter a number: 121
121 is a Palindrome Number

Enter a number: 123
123 is NOT a Palindrome Number.


