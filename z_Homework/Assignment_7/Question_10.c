#include <stdio.h>

int main()
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[3][2] = {{1, 4}, {2, 5}, {3, 6}};
    int c[2][2];
    printf("Array a:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%5d", *(*(a + i) + j));
        printf("\n");
    }
    printf("Array b:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            printf("%5d", *(*(b + i) + j));
        printf("\n");
    }
    printf("Array c:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < 3; k++)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            printf("%5d", *(*(c + i) + j));
        }
        printf("\n");
    }
}