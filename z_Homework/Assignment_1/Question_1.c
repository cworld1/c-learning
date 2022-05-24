#include <stdio.h>

int main(void)
{
    float sum = 0.0;
    register int maxSign = 100;
    for (int sign = 1; sign <= maxSign; sign++)
    {
        sum = sum + 1.0 / sign * (sign % 2 ? 1 : -1);
    }
    printf("The result is: %f\n", sum);
}