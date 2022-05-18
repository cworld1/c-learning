#include <stdio.h>

int main()
{
    float sum = 0;
    float num;
    printf("Let's get the three numbers you want add.\n");
    for (int i = 1; i < 4; i++)
    {
        printf("Please enter number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }
    printf("The sum of these number is: %g\n", sum);
}