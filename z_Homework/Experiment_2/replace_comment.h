#include <string.h>
#define MAXSIZES 100
enum boolen
{
    NOT_FOUND,
    FOUNDED
};

int replace_str(char *input_p, char *output_p, char *old, char *new)
{
    char *pointer;
    int length, old_len = strlen(old), new_len = strlen(new);

    // 查找pi指向字符串中第一次出现替换串的位置，并返回指针（找不到则返回 null）
    pointer = strstr(input_p, old);
    if (pointer)
    {
        while (pointer)
        {
            // 计算被替换串前边字符串的长度
            length = (int)(pointer - input_p);
            // 复制到输出字符串
            memcpy(output_p, input_p, length);
            memcpy(output_p + length, new, new_len);
            // 跳过被替换串
            input_p = pointer + old_len;
            // 调整指向输出串的指针位置
            output_p = output_p + length + new_len;
            // 继续查找
            pointer = strstr(input_p, old);
        }
        // 复制剩余字符串
        strcpy(output_p, input_p);
        return FOUNDED;
    }
    // 没有找到则原样复制
    strcpy(output_p, input_p);
    return NOT_FOUND;
}