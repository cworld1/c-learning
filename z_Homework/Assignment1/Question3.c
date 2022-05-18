#include <stdio.h>

int main()
{
    int a;
    printf("Please enter the first number: ", a);
    scanf("%d", &a);
    int b;
    printf("Please enter the first number: ", b);
    scanf("%d", &b);

    int gcd;
    gcd = 1;

    for (int i = (a < b ? a : b); i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
            break;
        }
    }
    printf("The GCD of the two numbers is: %d\n", gcd);
    printf("The LCM of the two numbers is: %d\n", a * b / gcd);
}