// 与默认的 static 函数内参数相比，extern 可以用于 “全局” 声明，方便函数外的其他函数也能访问相关变量
// 但事实上为了使数据方便管理，我们一般会把 extern 的内容单独放到一个库里，以头文件的方式引入
// 下面用上次的查找最长行程序简单演示 extern 的用法：

#include <stdio.h>
#define MAXLINE 1000
int getline(void);
void copy(void);

/* print longest input line; specialized version */
void main()
{
    int len;
    extern int max;
    extern char longest[];
    max = 0;
    while ((len = getline()) > 0)
        if (len > max)
        {
            max = len;
            copy();
        }
    if (max > 0) /*there was a line*/
        printf("%s", longest);
}

/* getline: specialized version */
int getline(void)
{
    int c, i;
    extern char line[];
    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';
    return i;
}

/* copy: specialized version */
void copy(void)
{
    int i;
    extern char line[], longest[];
    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}