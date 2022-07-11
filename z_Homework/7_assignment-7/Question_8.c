#include <stdio.h>
#include <string.h>
void bubble_sort(char str[][10], int length);
void exchange_sort(char str[][10], int length);

void main()
{
    int length, select;
    FILE *fp = fopen("./Question_8_data.txt", "r");
    fscanf(fp, "%d", &length);
    char strings[length][10];
    for (int i = 0; i < length; i++)
        fscanf(fp, "%s", &strings[i]);

    do
    {
        printf("There's some ways to sort.\n\
    1. Bubble Sort\n\
    2. Exchange Maxmium Sort\n\
Please Select: ");
        scanf("%d", &select);
        switch (select)
        {
        case 1:
            bubble_sort(strings, length);
            break;
        case 2:
            exchange_sort(strings, length);
            break;
        default:
            printf("Enter wrong! Please check your input.");
            break;
        }
    } while (select != 1 && select != 2);

    printf("----------\nSorted Strings:\n");
    for (int i = 0; i < length; i++)
        printf("%s\n", strings[i]);
}

void bubble_sort(char str[][10], int length)
{
    char temp[10];
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (strcmp(str[j], str[j + 1]) > 0)
            {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }
}

void exchange_sort(char str[][10], int length)
{
    int tag;
    char temp[10];
    for (int i = 0; i < length - 1; i++)
    {
        tag = i;
        for (int j = i + 1; j < length; j++)
        {
            if (strcmp(str[tag], str[j]) > 0)
                tag = j;
        }
        strcpy(temp, str[tag]);
        strcpy(str[tag], str[i]);
        strcpy(str[i], temp);
    }
}