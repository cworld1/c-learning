#include <stdio.h>
int checkCount(int row, int column);

void main()
{
    int icount;
    printf("Number of possible moves for a knight on chess board:\n");
    for (int row = 1; row <= 8; row++) // 从 1 到 8 行
    {
        for (int column = 1; column <= 8; column++) // 从 1 到 8 列/位
        {
            icount = checkCount(row, column);
            printf("%4d", icount);
        }
        printf("\n");
    }
}

int checkCount(int row, int column)
{
    int count = 0, vertical; // 初始计数为 0
    for (int horizontal = -2; horizontal <= 2; horizontal++)
    {
        if (horizontal != 0) // 横向运动只能为 -2，-1，1，2
            for (int n = -1; n <= 1; n = n + 2)
            {
                // 控制循环两次，分别为纵向数字转化为负数和正数
                vertical = n * (3 - (horizontal > 0 ? horizontal : -horizontal));
                if (1 <= (row + horizontal) && (row + horizontal) <= 8 && 1 <= (column + vertical) && (column + vertical) <= 8)
                    count++;
            }
    }
    return count;
}