// 注意我们第一章讲过的这个函数：

#include <stdio.h>
/* count digits, white space, others */
void main()
{
    int c, nwhite = 0, nother = 0,
           ndigit[10] = {0};
    while ((c = getchar()) != EOF)
        // 注意这个判断。在 C 中，我们有 <ctype> 库的 isdigit 来判断指定的单字符是否为数字
        if (c >= '0' && c <= '9')
            // 这里进行了一个数据类型转换的操作，将 char 类型转换为 int 类型
            ndigit[c - '0']++;
        // 注意 char 转 int 的时候，unsigned 限定的才会有正负号的意义。
        // 如果知道后续有转换时，最好还是指定 unsigned（带符号）和 signed（不带符号）
        else if (c == ' ' || c == '\n' || c == '\t')
            nwhite++;
        else
            nother++;
    for (int i = 0; i < 10; i++)
        printf("digits of %d: %d\n", i, ndigit[i]);
    printf("White space: %d\nOther char: %d\n", nwhite, nother);
}

// 此外强制转换代码：
// int a = 9; // 初始化为 int
// sqrt((double) a); 强制转换后参加运算