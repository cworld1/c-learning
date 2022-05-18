// 定义好符号常量可以方便我们日后去调用和修改它们。
// 如对于之前的温度转换：

#include <stdio.h>
// 注意这里定义都是全大写，用于区分常量和警示拒绝修改
#define LOWER 0   // 最低温度
#define UPPER 300 // 最高温度
#define STEP 20   // 步长

void main()
{
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}