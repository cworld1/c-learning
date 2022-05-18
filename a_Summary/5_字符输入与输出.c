// 标准库提供了简单的输入输出。如：

#include <stdio.h>

void main()
{
    // 【热身】接收并打印内容
    /* printf("Tell me the char:\n");
    int c;
    // while 条件：只要 getchar 的内容不等于 EOF（来自主函数库的一个整形数据）
    while ((c = getchar()) != EOF)
        // 打印 putchar 的内容
        putchar(c); */

    // 【热身】字符计数
    /* double nchar;
    for (nchar = 0; getchar() != EOF; nchar++)
        ;
    printf("%.0f\n", nchar); */

    // 【热身】行计数
    /* int c, nline = 0;
    while ((c = getchar()) != EOF)
        // if(c == 10) // \n 在 ASCII 中为 10
        if (c == '\n')
            nline++;
    printf("Total %d lines.\n", nline); */

    // 【实战】字符、单词、行多种手段计数
    int c, state = 0,
           nline = 0, nword = 0, nchar = 0;
    while ((c = getchar()) != EOF)
    {
        nchar++; // 字符数加一
        if (c == '\n')
            nline++; // 遇到换行，行数加一
        if (c == ' ' || c == '\n' || c == '\t')
            state = 0; // 遇到单词间隙（空格、换行或缩进）开始计算
        // 下一次循环时如果触发了上面的代码或首次运行，下面的代码就会执行
        else if (state == 0)
        {
            state = 1; // 返回初始状态
            nword++;   // 计数加一
        }
    }
    printf("Lines: %d\nWords: %d\nCharacters: %d\n", nline, nword, nchar);
}