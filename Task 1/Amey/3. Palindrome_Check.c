#include <stdio.h>

int main() {
    int num, InputNo, reminder, reverse = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    InputNo = num;  // store the number to compare later
/*
so Bhaiya What We Do here Is we keep dividing the number by 10 in while loop and get the 
last digit everytime and put it into reveerse and check if the original number is same as reverse or not
*/
    while (num > 0) {
        reminder = num % 10;              
        reverse = (reverse * 10) + reminder; 
        num = num / 10;            
    }

    if (InputNo== reverse) {
        printf("The number is a palindrome.");
    } else {
        printf("The number is not a palindrome.");
    }

    return 0;
}