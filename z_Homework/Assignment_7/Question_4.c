#include <stdio.h>
#include <string.h>
int main()
{
    char current;
    int offset, overtake;
    FILE *input = fopen("./file1.txt", "r"),
         *output = fopen("./file2.txt", "w");

    printf("Please enter offset num: ");
    scanf("%d", &offset);
    while (!feof(input))
    {
        fscanf(input, "%c", &current);
        // 判断并计算参数值
        if (current >= 'A' && current <= 'Z')
            overtake = (current += offset) - 'Z';
        else if (current >= 'a' && current <= 'z')
            overtake = (current += offset) - 'z';
        else
            overtake = 0;
        // 对溢出处理
        if (overtake > 0)
            current -= 26;
        printf("%c", current);
        fputc(current, output);
    }
    fclose(input);
    fclose(output);
}