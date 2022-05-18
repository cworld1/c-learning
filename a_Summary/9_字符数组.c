// 字符数组是 C 中最常用的数组类型。

// 【实战】打印输入句段中最长的一行
// 首先我们要有一个处理这些内容的框架/思路：
// while (还有未检查的行)
//     if (该行比已检查记录的最长行还要长)
//     {
//         保存改行为最长行;
//         保存该行的长度;
//     }

#include <stdio.h>
#define MAXLINE 1000 // 指明最大可接收长度
int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
void main()
{
    int len, max = 0;                          // 当前行长和最长行的行长
    char line[MAXLINE], longest[MAXLINE];      // 当前行和最长行
    while ((len = getline(line, MAXLINE)) > 0) // 记录调用并传回的行长并判断行长是否大于零
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    if (max > 0) /*therewasaline*/
        printf("The longest line: %s", longest);
}

/* getline: read a line into s, return length */
int getline(char line[], int maxline)
{
    int c, i;
    // 注意这个 for 语句的判断方式。这里的 i 恰好记录了行长。
    // i 从 0 开始，一直自增，直到读取到换行或结束或超出最大可容纳行长。
    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        line[i] = c;
    // 但就算读取到换行符，我们也要保存下来。这里单独保存了下
    if (c == '\n')
    {
        line[i] = c;
        i++;
    }
    // 最后保存 "\0" 表示字符串的结束
    line[i] = '\0';
    return i; // 注意返回的是行长，而不是字符数组；
    // 字符数组在传入之后已经被修改过了。这个修改效果会影响到主函数的数组
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0') // to[i] 等于 from[i] 中赋值的值不等于 “\0”
        i++;
}