#include <stdio.h>
#include <math.h>

void calculate(float a, float b, float c)
{
    float delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        printf("No solution about this equation!");
    }
    else
    {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        printf("The result is:\n    x1 = %g\n    x2 = %g", x1, x2);
    }
}

int main()
{
    float a, b, c;
    printf("Please input the coefficient of [ x^2 ]: ");
    scanf("%g", &a);
    printf("Please input the coefficient of [ x ]: ");
    scanf("%g", &b);
    printf("Please input the common sense: ");
    scanf("%g", &c);
    if (a)
        calculate(a, b, c);
    else
        printf("Sorry. What you input is wrong.");
}