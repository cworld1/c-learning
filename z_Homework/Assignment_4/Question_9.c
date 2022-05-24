#include <stdio.h>

void main()
{
    FILE *fp = fopen("./twomm.dat", "r");
    int nums[20], large, subLarge, small, subSmall;
    float sum = 0.0;

    // 读取数据
    for (int i = 0; i < 20; i++)
    {
        // 读取单个数字
        fscanf(fp, "%d", &nums[i]);
        sum += nums[i];
    }
    // 初始值设置为平均数
    large = subLarge = small = subSmall = sum / 20;

    for (int i = 0; i < 20; i++)
    {
        // 比较大小（最大，第二大）
        if (nums[i] > subLarge)
        {
            if (nums[i] > large)
            {
                subLarge = large;
                large = nums[i];
            }
            else
                subLarge = nums[i];
        }

        // 比较大小（最小，第二小）
        if (nums[i] < subSmall)
        {
            if (nums[i] < small)
            {
                subSmall = small;
                small = nums[i];
            }
            else
                subSmall = nums[i];
        }
    }

    printf("The two largest values in the list are: %d, %d\n", large, subLarge);
    printf("The two smallest values in the list are: %d, %d\n", small, subSmall);
}