#include <stdio.h>

void main()
{
    int precision;
    float formula = 1.0;
    printf("Please enter a number to control precision: ");
    scanf("%d", &precision);

    for (int i = 1; i < precision; i++)
    {
        formula += 1.0 / (2 * i + 1) * (i % 2 ? -1 : 1);
    }
    printf("Pai is calculated as %f", formula * 4);
}