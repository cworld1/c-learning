#include <stdio.h>
/* count digits, white space, others */
void main()
{
    // 【实战】详细判断输入内容（数字、空白和其他）
    int c, nwhite = 0, nother = 0,
           ndigit[10] = {0}; // 初始化数组
    while ((c = getchar()) != EOF)
        // 如果输入为 0 ~ 9（注意这是比较 ASCII 值），则 ndigit 对应的数字位加一
        if (c >= '0' && c <= '9')
            ndigit[c - '0']++;
        // 如果输入为空（空格、换行符、制表符）
        else if (c == ' ' || c == '\n' || c == '\t')
            nwhite++;
        // 其他任何字符都使得 nother 加一
        else
            nother++;
    for (int i = 0; i < 10; i++)
        printf("digits of %d: %d\n", i, ndigit[i]);
    printf("White space: %d\nOther char: %d\n", nwhite, nother);
}
