#include <stdio.h>

/* strcat: concatenate t to end of s; s must be big enough */
int string_copy(char s[], char t[])
{
    int i, j;
    i = j = 0;
    while (s[i] != '\0') /* find end of s */
        i++;
    while ((s[i++] = t[j++]) != '\0') /* copy t */
        ;
    return i;
}

void main()
{
    char origin[10] = "the left",
         append[10] = "the right";
    int length = string_copy(origin, append);
    for (int i = 0; i < length; i++)
    {
        printf("%s", origin[i]);
    }
}