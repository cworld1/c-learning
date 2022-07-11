#include <stdio.h>

/* strcat: concatenate append to end of origin; origin must be big enough */
int string_copy(char origin[], char append[])
{
    int i = 0, j = 0;
    while (origin[i] != '\0') // 找到字符串结尾
        i++;
    while ((origin[i++] = append[j++]) != '\0') // 找到之后开始赋值
        ;
    return i; // 最后返回新字符串长度
}

void main()
{
    char origin[20] = "the left",
         append[] = "the right";
    int length = string_copy(origin, append);
    printf("%d in total.\n%s\n", length, origin);
}