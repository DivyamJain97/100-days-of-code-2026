//Write a program to calculate the factorial of a number.
#include <stdio.h>
int main()
{
    int n, i;
    long long f= 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        f = f * i;
    }
    printf("Factorial = %lld", f);
    return 0;
}