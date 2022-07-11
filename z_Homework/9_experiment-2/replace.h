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

    if (pointer = strstr(input_p, old))
    {
        while (pointer)
        {
            length = (int)(pointer - input_p);
            memcpy(output_p, input_p, length);
            memcpy(output_p + length, new, new_len);
            input_p = pointer + old_len;
            output_p = output_p + length + new_len;
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