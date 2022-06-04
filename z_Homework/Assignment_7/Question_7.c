#include <stdio.h>
#include <string.h>

void bubble_sort(char array[])
{
    int temp, length = strlen(array) - 1;
    for (int j = 0; j < length - 1; j++)
    {
        for (int i = 0; i < length - j; i++)
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
    }
}

void main()
{
    char string[50], path[50];
    int length;

    printf("Enter path to read from file: ");
    gets(path);
    FILE *fp;
    if ((fp = fopen(path, "r")) == NULL)
    {
        printf("File open error!\n");
        return;
    }
    fscanf(fp, "%s", &string);
    printf("The source string: %s\n", string);

    bubble_sort(string);
    printf("Sorted String: %s\n", string);
}