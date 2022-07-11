#include <stdio.h>
#include "replace.h"

int replace_str(char *input_p, char *output_p, char *old, char *new);

void main()
{
    FILE *input, *output;
    char input_name[MAXSIZES], output_name[MAXSIZES],
        old_word[MAXSIZES], new_word[MAXSIZES];
    char cur_line[MAXSIZES], cur_line_new[MAXSIZES];
    printf("Please enter the info of the followings:\n");
    printf("1. Name of the original text file: ");
    gets(input_name);
    fflush(stdin);
    printf("2. Misspelled word to be replaced: ");
    gets(old_word);
    fflush(stdin);
    printf("3. Correct word that replaces the wrong one: ");
    gets(new_word);
    fflush(stdin);
    printf("4. Name of the new text file: ");
    gets(output_name);
    fflush(stdin);
    printf("------------------------------\n");

    // 打开文件
    if ((input = fopen(input_name, "r")) == NULL || (output = fopen(output_name, "w")) == NULL)
    {
        printf("Fail to open the file!\n");
        return;
    }

    // 循环读取
    while (!feof(input))
    {
        fgets(cur_line, MAXSIZES, input);
        if (replace_str(cur_line, cur_line_new, old_word, new_word) == FOUNDED)
            printf("[x] We found this line: %s -> [v] Correct: %s", cur_line, cur_line_new);
        fputs(cur_line_new, output);
        memset(cur_line, 0, sizeof cur_line); // 清空数组内容
    }

    // 关闭文件
    fclose(input);
    fclose(output);
}