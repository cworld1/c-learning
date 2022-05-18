#include <stdio.h>
#define FILL '*'
// #define FILL '$'
// #define FILL '?'
#define BLANK ' '

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    // 前半 & 中间一行
    for (int line = 1; line < n + 1; line++)
    {
        printf("\n\t");
        for (int blank = 0; blank < n * 2 - line * 2; blank++)
            putchar(BLANK);
        for (int fill = 0; fill < line * 2 - 1; fill++)
            putchar(FILL);
    }

    // 后半
    for (int line = n - 1; line > 0; line--)
    {
        printf("\n\t");
        for (int fill = 0; fill < line * 2 - 1; fill++)
            putchar(FILL);
        for (int blank = 0; blank < n * 2 - line * 2; blank++)
            putchar(BLANK);
    }
}