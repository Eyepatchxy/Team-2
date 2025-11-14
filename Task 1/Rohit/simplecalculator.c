 #include <stdio.h>
 int main()
{
    float p, q;
    char Operators;
    printf("Welcome To A Simple and steady calculator\nLET ME KNOW WHICH OPERATION YOU WANT TO PERFORM\nYou have to enter Sign of desired operation that is +,-,/,*,");
    printf("Please enter the number you want to work with:-");
    scanf("%f", &p);
    printf("Enter the Second Number you want to work with:-");
    scanf("%f", &q);
    printf("The Operation You are willing To Perform?");
    scanf(" %c", &Operators);
    if (Operators == '+')
    {
        printf("The Sum Of These Numbers Is:-%f", p + q);
    }
    else if (Operators == '-')
    {
        printf("The Difference Of These Numbers Is:-%f", p-q);
    }
    else if (Operators == '*')
    {
        printf("The Multiplication Of These Numbers Is:-%f", p*q);
    }
    else if (Operators == '/')
    {
        if (q == 0)
            printf("\nINDERMINATE/NOT VALID");
        else
        {
            printf("The Division if These Numbers Is:-%f", p / q);
        }
    }
    else
    {
        printf("Invalid Operation/nTHANK YOU!!!");
    }
    return 0;
}




