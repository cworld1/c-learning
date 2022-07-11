#include <stdio.h>
int calcGCD(int a, int b);

void main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("The GCD of the two numbers: %d", calcGCD(a, b));
}

int calcGCD(int a, int b)
{
    for (int i = a < b ? a : b; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
    }
}