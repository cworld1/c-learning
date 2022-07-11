#include <stdio.h>

void calculate(int year)
{
    if (!(year % 400) || !(year % 4) && year % 100)
        printf("It's the leap year.");
    else
        printf("It's not the leap year.");
}

void main()
{
    int year;
    printf("Please input the year: ");
    scanf("%d", &year);
    if (year > 0)
        calculate(year);
    else
        printf("Sorry. What you input is wrong.");
}