#include <stdio.h>
#include <string.h>

void main()
{
    FILE *fp = fopen("./Question_3_data.txt", "r");
    int length;
    fscanf(fp, "%d", &length);
    char words[length][50];

    fscanf(fp, "%s", &words[0]);
    int biggest, smallest, current_len, biggest_pos, smallest_pos;
    biggest = smallest = strlen(words[0]);
    for (int i = 1; i < length; i++)
    {
        fscanf(fp, "%s", &words[i]);
        current_len = strlen(words[i]);
        if (biggest < current_len)
        {
            biggest = current_len;
            biggest_pos = i;
        }
        if (smallest > current_len)
        {
            smallest = current_len;
            smallest_pos = i;
        }
    }
    printf("The biggest: %s; The smallest: %s.",
           words[biggest_pos], words[smallest_pos]);
}