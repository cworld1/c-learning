#include <stdio.h>

void main()
{
    int fll = 1, fl = 1, f;
    printf("F1  = %d\n", fll);
    printf("F2  = %d\n", fl);
    for (int i = 3; i < 41; i++)
    {
        f = fll + fl;
        printf("F%-2d = %d\n", i, f);
        fll = fl;
        fl = f;
    }
}