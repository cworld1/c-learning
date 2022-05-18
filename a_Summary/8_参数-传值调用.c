// 参数传递值在自定义函数的初始化和调用很常见。我们以还是以次方程序为例：

#include <stdio.h>
// 此处创建的为形参
int power(int base, int n);

/* test power function */
void main()
{
    for (int i = 0; i < 10; i++)
        // 此处调用的为实参，是实际参与运行的参数（对应的值）
        printf("%2d %3d %6d\n", i, power(2, i), power(-3, i));
}

/* power: raise base to n-th power; n >= 0 */
int power(int base, int n)
{
    // 注意函数内定义的参数不会影响原参数值，但会参与运算
    // 注意不管是主函数（事实上自定义函数内还只能手动传递接收）还是全局变量的同名参数，
    // 都不会影响到形参和函数内自定义的变量。内部定义的优先级更高。
    int p = 1;
    for (int i = 0; i < n; i++)
        p = p * base;
    return p;
}