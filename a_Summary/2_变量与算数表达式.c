// 打印华氏摄氏度对照表

#include <stdio.h>
void main()
{
    // 【实战】温度转换展示 1
    /* int lower = 0,    // 温度表下限
        upper = 300,  // 温度表上限
        step = 20,    // 步长
        fahr = lower, // 华氏度起始为下限
        celsius;
    // int 为整数类型初始化，通常 16 位，此外还有 float 浮点型，通常 32 位
    // 除 int 与 float 类型之外，C 语言还提供了其它一些基本数据类型，例如：
    // char 字符型（一个字节）
    // short 短整型
    // long 长整型
    // double 双精度浮点型

    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3d\t%3d\n", fahr, celsius); // “\t” 为制表符缩进，“\n” 为换行符
        fahr = fahr + step;                  //累加
    } */

    // 【实战】温度转换展示 2
    // 一个问题是我们只精确到整数。真实的转换应当包含小数：
    float lower = 0, upper = 300, step = 20,
          fahr = lower, celsius;
    while (fahr <= upper)
    {
        // 注意计算中的所有数据都尽量转换成浮点型参与运算
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        // 小数点前表示占槽宽，小数点后表示精确度
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    // 关于 printf 打印数值的一些细节：
    // %d 按照十进制整型数打印
    // %6d 按照十进制整型数打印，至少 6 个字符宽
    // %f 按照浮点数打印
    // %6f 按照浮点数打印，至少 6 个字符宽
    // %.2f 按照浮点数打印，小数点后有两位小数
    // %6.2f 按照浮点数打印，至少 6 个字符宽，小数点后有两位小数

    // 此外，printf 函数还支持下列格式说明：% o 表示八进制数，% x 表示十六进制数，
    // % c 表示单个字符，% s 表示字符串，% % 表示百分号（号）本身。
}