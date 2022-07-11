#include <stdio.h>

void main()
{
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("Illegal input!");
        return;
    }

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            printf("It's not a prime number.");
            return;
        }
    }
    printf("It's a prime number.");
}
