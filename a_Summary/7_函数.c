// 在 C 中，我们可以轻松地自定义函数

#include <stdio.h>
// 你也可以把整个 power 函数丢到最前面来避免函数被声明两次
int power(int base, int n);

/* test power function */
void main()
{
    for (int i = 0; i < 10; i++)
        // 分别打印的是：次方数、2 的该次方、-3 的该次方
        printf("%2d %3d %6d\n", i, power(2, i), power(-3, i));
}

/* power: raise base to n-th power; n >= 0 */
// 注意 “int power” 中的 int 代表 return 的内容为 int 类型
int power(int base, int n)
{
    int p = 1;
    for (int i = 0; i < n; i++)
        p = p * base;
    return p;
}
