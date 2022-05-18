// for 语句是一种循环语句，它是对 while 语句的推广。
// 我们来试试对之前的温度转换用 for 语法进行改进：

#include <stdio.h>
void main()
{

    // 【实战】温度转换展示 3
    for (float fahr = 0; // 初始化 fahr，从 0 开始
         fahr <= 300;    // 要求 fahr <= 300，也就是最大
         fahr += 20)     // fahr 增加的步长位 20
    {
        printf("%3.0f %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    }
}