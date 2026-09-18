//Write a program to check if a number is a strong number.
#include <stdio.h>

int main()
{
    int n, original, digit, i;
    int fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        digit = n % 10;
        fact = 1;

        for(i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if(sum == original)
    {
        printf("It is a strong number");
    }
    else
    {
        printf("It is not a strong number");
    }

    return 0;
}