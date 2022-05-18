#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int nums, current;
    printf("Please enter numbers of randomly generated nums: ");
    scanf("%d", &nums);
    srand(time(0));
    FILE *fp = fopen("./data.txt", "w");
    for (int i = 0; i < nums; i++)
    {
        current = rand() % 100;
        fprintf(fp, "%d ", current);
    }
    fclose(fp);
    printf("Random nums successfully generated.");
}