#include <stdio.h>
#include <string.h>

// 每行最大长度
#define LINE_MAX 1024

/**
 *@para   path 输入文件路径
 *@return 文件行数
 */
int read_line(char *path)
{
    FILE *fp;
    int line_num = 0;         // 文件行数
    int line_len = 0;         // 文件每行的长度
    char buf[LINE_MAX] = {0}; // 行数据缓存

    fp = fopen(path, "r");
    if (NULL == fp)
    {
        printf("open %s failed.\n", path);
        return -1;
    }

    while (fgets(buf, LINE_MAX, fp))
    {
        line_num++;
        line_len = strlen(buf);
        // 排除换行符
        if ('\n' == buf[line_len - 1])
        {
            buf[line_len - 1] = '\0';
            line_len--;
            if (0 == line_len)
            {
                //空行
                continue;
            }
        }
        // windos文本排除回车符
        if ('\r' == buf[line_len - 1])
        {
            buf[line_len - 1] = '\0';
            line_len--;
            if (0 == line_len)
            {
                //空行
                continue;
            }
        }
        printf("%s\n", buf);
        /** 对每行数据(buf)进行处理 **/
    }

    if (0 == feof)
    {
        // 未读到文件末尾
        printf("fgets error\n");
        return -1;
    }
    fclose(fp);

    return line_num;
}

int main()
{
    int line_num = read_line("./EX6_1.DAT");
    printf("line_num = %d\n", line_num);
    return 0;
}
