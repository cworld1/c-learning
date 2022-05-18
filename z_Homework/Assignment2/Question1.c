#include <stdio.h>

int main()
{
    // 新建变量
    float current, max, min;

    printf("Please enter the number 1: ");
    scanf("%f", &current);
    max = min = current;
    // 循环主体
    for (int i = 2; i < 11; i++)
    {
        printf("Please enter the number %d: ", i);
        scanf("%f", &current);
        max = (current > max ? current : max);
        min = (current < min ? current : min);
    };

    // 打印结果
    printf("\nThank you! The results are calculated:\n");
    printf("The max of the numbers is: %g\n", max);
    printf("The min of the numbers is: %g\n", min);
}