#include <stdio.h>
enum boolen
{
    FALSE,
    TRUE
};
int strlen_sim(char *pointer);
int strcat_sim(char *pointer1, char *pointer2, char *return_pointer);
int strcmp_sim(char *pointer1, char *pointer2);
int substr_sim(char *pointer, int begin, int end, char *return_pointer);

void main()
{
    char string1[] = "First string. ",
         string2[] = "Second string. ",
         return_strcat[50], return_substr[50];
    printf("string1: %s\nstring2: %s\n\n", string1, string2);

    // strlen
    printf("strlen (of string1): %d\n", strlen_sim(string1));

    // strcat
    strcat_sim(string1, string2, return_strcat);
    printf("strcat (of string1 and string2): %s\n", return_strcat);

    // strcmp
    printf("strcmp (of string1 and string2): %d\n", strcmp_sim(string1, string2));

    // substr
    if (substr_sim(string1, 1, 5, return_substr) == TRUE)
        printf("sub (of string1): %s", return_substr);
}

int strlen_sim(char *pointer)
{
    int i;
    for (i = 0; *pointer != '\0'; i++)
        pointer++;
    return i;
}

int strcat_sim(char *pointer1, char *pointer2, char *return_pointer)
{
    for (; *pointer1 != '\0'; pointer1++, return_pointer++)
        *return_pointer = *pointer1;
    for (; *pointer2 != '\0'; pointer2++, return_pointer++)
        *return_pointer = *pointer2;
}

int strcmp_sim(char *pointer1, char *pointer2)
{
    int diff;
    while (*pointer1 != '\0' || *pointer2 != '\0')
    {
        if ((diff = *pointer1 - *pointer2) != 0)
            return diff;
        *pointer1++;
        *pointer2++;
    }
    return 0;
}

int substr_sim(char *pointer, int begin, int end, char *return_pointer)
{
    for (int i = begin; i <= end; i++, return_pointer++)
    {
        if (*(pointer + i) == '\0')
            return FALSE;
        *return_pointer = *(pointer + i);
    }
    return TRUE;
}